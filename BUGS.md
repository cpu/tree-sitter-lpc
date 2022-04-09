# Known Bugs/Things to Fix

* Whitespace tolerance:
  * e.g. `({` vs `(  {`
  * Got this working in most places, but not `array_literal`,
    `quoted_aggregate`.

* Index range
  * has trouble with the `..` abutting a numeric literal.
  * e.g. `[2..3]`

* Char literals or Symbols
  * e.g. `'a'` or `'a`
  * Can't seem to parse both correctly at the same time. 
  * Presently favouring parsing symbols over char literals but need to fix it so
    both work...

* Pre-processor
  * Zero support implemented.

* Lvalue index/member assignments

* Coroutines
* LWOs
* Syntax for limiting object type to a blueprint
* Mixed struct
  * Need to verify coverage

  
* Precedence 
  * It's all messed up I bet :)
