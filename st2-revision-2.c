#include <stdio.h>

void myFunction()
{                                   //-> function declaration
  printf("I just got executed!\n"); //-> function defination
}
// function defination ke waqt likhe hue variables then it is called parameters and calling ke waqt argument kehte hai
void calculateSum(int x, int y)
{
  int sum = x + y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
}

int main()
{
  myFunction();
  calculateSum(5, 8);

  // Pointers
  //  * is known as value at address operator
  //  & is known as address of operator
  int age = 22;
  int *ptr = &age;
  int _age = *ptr;
  printf("%p\n", _age);

  int myNumbers[5] = {10, 20, 30, 40, 50};
  int *start = &myNumbers[1]; // points to 20
  int *end = &myNumbers[4];   // points to 50

  printf("%ld\n", end - start); // give me the no of element between them :3

  return 0;
}