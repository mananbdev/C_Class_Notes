#include <stdio.h>

// Create a function
void myFunction()            // function declaration
{
  printf("Hello World!\n"); // function is always executed outside the int main() .        function defination
}

// Basic calculator
void calculateSum()
{ // void means it does not returns any value
  printf("Enter two numbers\n");
  int x, y;
  scanf("%d %d", &x, &y);
  printf("The addition of two numbers are %d\n", x + y);
  printf("The subtraction of two numbers are %d\n", x - y);
  printf("The multiplication of two numbers are %d\n", x * y);
  printf("The division of two numbers are %f\n", (float)x / y);
}

int main()
{
  // A function is a block of code which only runs when it is called.
  // Function increase granuality(the level of detail or the size of components a system is broken into)

  myFunction(); // calling of function
  calculateSum();

  return 0;
}

