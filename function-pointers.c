#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int main(){
  //A function pointer is like a normal pointer, but instead of pointing to a variable, it points to a function.
  /* You can assign a function to a pointer in two ways:

  ptr = add;  
  ptr = &add;
  Both are the same, because the function's name already represents its address in memory.*/
  int (*ptr)(int, int) = add;
  int result = ptr(5, 3);
  printf("Result: %d", result);

  return 0;
}
