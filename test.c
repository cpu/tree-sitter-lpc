// Hello world

/*
 * Hello
 * World! //Yeah
 */

#pragma strong_types, strict_types
#pragma foo

#define YEET 0x9999

#define SKEET(x, y)  ( y * x)

#ifdef YEET
  private void yeet();
#else
  private void no_yeet();
#endif

private functions nosave variables inherit "complex/room1";
public variables inherit "complex/room2";
private functions inherit "complex/room3";
virtual inherit "blue";
inherit "red";

default private;
default private variables public functions;

public int x = ({int}) 0x420;
private nosave string y;

struct Forward;

struct Empty {
};

struct Nested {
  int a;
};

struct Filled (Empty) {
  mapping a;
  mapping b;
  struct Nested nest;
};

symbol foo = 'y;

closure hap = lambda( ({ 'x, 'y, #'({ 10 }) }), ({ #'write, 'x, 'y }) );

int x2 = x->fun();
string z = "afunc";
object y;

mixed yeet = y->"somefunc"();
mixed yeet2 = y.z();

public varargs int|string|mapping foo(int a, varargs mixed* rest) {
  struct Filled instance = (<Filled> ([ :foo() ]));


  mapping empty = ([ :5 ]);
  mapping not_empty = ([ "foo": 5; "hey", 9, "bar": 10; "what", 0 ]);

  printf("%d", 1 in empty);
  printf("%d", ("foo" in not_empty));

  struct Filled empty_instance = (<Filled>);

  empty_instance->a = empty;
  empty_instance.b = not_empty;

  closure inline = (:
    return $1;
  :);

  if(a) {
    return 0b11110000;
  } else return 0;
}

<int|string>* one(int x = 10, string y = "cool", mixed z) {
  mixed x2 = &x;
  mixed x3 = &(x);
  mixed x3 = &(foo());
  return 1;
}

int|<string*> two() {
  closure z = #'efun::write;
  closure z2 = #'var::z;
  closure z3 = #'one;
  return 1;
}

private xxxx() {
  {
    int a &= ~0;
    do {
      a++; 
      ++a;
      a+=5 * 500;
    } while(!a);

    foreach(int a : 10 .. 50) {
      write(a);
    }
    return 2;
  }
}

mixed yyyyyyy() {
  closure nested = function int* (int y, varargs mixed* rest) {
    return 0;
  };

  closure nested_with_ctx = function int* (int y, varargs mixed* rest): int a = 10, y; string z {
    printf("%s", z);
    return ({ a, y });
  };

  string err;
  if(err = catch(foo(); nolog; reserve 20 * 20)) {
    return err;
  }

  switch(x()) {
    default: err = "nope"; break;
    case "cool": continue;
    case 10 .. 20: {
      notify_fail("bye");
    }
  }

  return;
}

coroutine cb;

async void cool() {
  yield();
}

async int whatev(int arg = 1) {
  yield(arg ? 99 : arg);
}

void x() {
  await(cool());
}

int bar = await(whatev(9));


