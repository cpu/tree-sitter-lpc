#!/usr/bin/env bash
#
# Recursively parse every .c file under a directory and report pass/fail.
#
# Usage: smoke-parse.sh <dir> [-x <exclude-list-file>] [-v]
#
#   -x FILE   newline-delimited list of paths to skip. Lines starting with
#             `#` are comments. Each entry is matched as a substring of
#             the absolute file path, so e.g. `t-language/tf-switch2.c`
#             skips that one file and `t-0000233/` skips a whole dir.
#   -v        verbose — print per-file FAIL lines as we go.
#
# Exit code: 0 if all files parse cleanly (after exclusions), 1 otherwise.

set -u

verbose=0
exclude_file=""
dir=""

while [[ $# -gt 0 ]]; do
  case "$1" in
    -x) exclude_file="$2"; shift 2 ;;
    -v) verbose=1; shift ;;
    -h|--help)
      sed -n '3,15p' "$0"
      exit 0 ;;
    *)
      if [[ -z "$dir" ]]; then dir="$1"; shift
      else echo "unexpected arg: $1" >&2; exit 2; fi ;;
  esac
done

if [[ -z "$dir" ]]; then
  echo "usage: $0 <dir> [-x exclude-list] [-v]" >&2
  exit 2
fi

if [[ ! -d "$dir" ]]; then
  echo "not a directory: $dir" >&2
  exit 2
fi

# Build the exclude-substrings array (skip blanks and `#` comments).
excludes=()
if [[ -n "$exclude_file" ]]; then
  if [[ ! -f "$exclude_file" ]]; then
    echo "exclude file not found: $exclude_file" >&2
    exit 2
  fi
  while IFS= read -r line; do
    line="${line%%#*}"           # drop trailing comments
    line="${line#"${line%%[![:space:]]*}"}"  # ltrim
    line="${line%"${line##*[![:space:]]}"}"  # rtrim
    [[ -z "$line" ]] && continue
    excludes+=("$line")
  done < "$exclude_file"
fi

is_excluded() {
  local path="$1" pat
  for pat in "${excludes[@]}"; do
    [[ "$path" == *"$pat"* ]] && return 0
  done
  return 1
}

pass=0
fail=0
skipped=0
failed_files=()

while IFS= read -r f; do
  if is_excluded "$f"; then
    skipped=$((skipped + 1))
    continue
  fi
  if tree-sitter parse -q "$f" >/dev/null 2>&1; then
    pass=$((pass + 1))
  else
    fail=$((fail + 1))
    failed_files+=("$f")
    if [[ $verbose -eq 1 ]]; then
      echo "FAIL: $f"
    fi
  fi
done < <(find "$dir" -type f -name "*.c" | sort)

total=$((pass + fail))
echo "---"
echo "parsed:  $pass / $total ($((100 * pass / (total > 0 ? total : 1)))%)"
echo "failed:  $fail"
echo "skipped: $skipped (excluded)"

if [[ $fail -gt 0 && $verbose -ne 1 ]]; then
  echo
  echo "failures (first 20):"
  for f in "${failed_files[@]:0:20}"; do echo "  $f"; done
  if [[ ${#failed_files[@]} -gt 20 ]]; then
    echo "  ... and $((${#failed_files[@]} - 20)) more"
  fi
fi

[[ $fail -eq 0 ]]
