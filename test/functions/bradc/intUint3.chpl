def foo(x: int, y: uint) {
  writeln("in int/uint foo");
}

def foo(x: uint, y: int) {
  writeln("in uint/int foo");
}

foo(1u, 2);
foo(1, 2u);
foo(1u, 2u);
