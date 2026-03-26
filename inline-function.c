#include <stdio.h>

//An inline function is a small function that asks the compiler to insert its code directly where it is called, instead of jumping to it.

inline int add(int a, int b) {
  return a + b;
}

int main(){
  printf("%d", add(5, 3));

  return 0;
}
/*Inline functions are best for small, simple functions. Avoid using them for:
Large functions (they make your program bigger)
Recursive functions
Functions that are rarely called*/