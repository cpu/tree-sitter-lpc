// Hello world

/*
 * Hello
 * World! //Yeah
 */

private functions nosave variables inherit "complex/room1";
public variables inherit "complex/room2";
private functions inherit "complex/room3";
virtual inherit "blue";
inherit "red";

default private;
default private variables public functions;

public int x = 0x420;
private nosave string y;

struct Forward;

struct Empty {
};

struct Nested {
  int a;
};

struct Filled (Empty) {
  mapping a;
  struct Nested nest;
};

int x2 = x->fun();
string z = "afunc";
object y;

mixed yeet = y->"somefunc"();
mixed yeet2 = y.z();

public varargs int|string|mapping foo(int a, varargs mixed* rest) {
  return 0b11110000;
}

<int|string>* one(int x = 10, string y = "cool", mixed z) {
  return 1;
}

int|<string*> two() {
  return 1;
}

private xxxx() {
  {
    return 2;
  }
}

mixed yyyyyyy() {
  closure nested = function int* (int y, varargs mixed* rest) {
    return 0;
  };

  return;
}
