#!/usr/bin/env bash
#
# Smoke-parse the LDMud test corpus, skipping files that are out of
# scope for this grammar. See `limitations.md` for the rationale on each
# exclusion category.
#
# Usage: smoke-ldmud.sh [-v]
#
# Override LDMUD_TEST_DIR to point elsewhere; defaults to the local
# checkout at ~/Code/C/ldmud/test/.

set -u

cd "$(dirname "$0")/.."

LDMUD_TEST_DIR="${LDMUD_TEST_DIR:-$HOME/Code/C/ldmud/test}"

if [[ ! -d "$LDMUD_TEST_DIR" ]]; then
  echo "LDMUD_TEST_DIR not found: $LDMUD_TEST_DIR" >&2
  echo "set LDMUD_TEST_DIR or check out https://github.com/ldmud/ldmud" >&2
  exit 2
fi

exec ./scripts/smoke-parse.sh "$LDMUD_TEST_DIR" \
  -x ./scripts/ldmud-excludes.txt "$@"
