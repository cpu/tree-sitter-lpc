# Known Bugs/Things to Fix

* Whitespace tolerance:
  * e.g. `({` vs `(  {`
  * Got this working in most places, but not `array_literal`,
    `quoted_aggregate`.

* Float literals:
  * We don't accept '4.' without trailing digits.

* Char literals or Symbols
  * e.g. `'a'` or `'a`
  * Can't seem to parse both correctly at the same time. 
  * Presently favouring parsing symbols over char literals but need to fix it so
    both work...

* Pre-processor
  * Zero support implemented.

* Mixed structs

* Precedence 
  * It's all messed up I bet :)
