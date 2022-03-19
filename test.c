// Hello world

public int x = 0x420;
private nosave string y;

public varargs int|string|mapping foo(int a, varargs mixed* rest) {
  return 0b11110000;
}

<int|string>* one(int x = 10, string y = "cool", mixed z) {
  return 1;
}

int|<string*> two() {
  return 1;
}

int|string whatever = one();
int whatever2 = one(99, "cool");
