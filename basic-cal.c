#include <stdio.h>
#include <math.h>

void sum(double x, double y)
{
  printf("Addition of the given number is %lf :", x + y);
}
void sub(double x, double y)
{
  printf("Subtraction of given number is %lf :", x - y);
}
void mult(double x, double y)
{
  printf("Multiplication of given number is %lf :", x * y);
}
void div(double x, double y)
{
  if (y == 0)
  {
    printf("Error: Division by zero!");
    return;
  }
  printf("Division of given number is %lf :", x / y);
}
void power(double x, double y)
{
  printf("Result of a power b is %lf:", pow(x, y));
}
void square(double x, double y)
{
  printf("Squares of given numbers is %lf & %lf", x * x, y * y);
}
void root(double x, double y)
{
  printf("Square root of given number is %lf & %lf", sqrt(x), sqrt(y));
}

int main()
{
  double a, b;
  printf("Enter two numbers :\n");
  scanf("%lf %lf", &a, &b);
  int choice;
  printf("Enter your choice.\n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n 5 for power \n 6 for square \n 7 for square root\n");
  scanf("%d", &choice);
  if (choice == 1)
  {
    sum(a, b);
  }
  else if (choice == 2)
  {
    sub(a, b);
  }
  else if (choice == 3)
  {
    mult(a, b);
  }
  else if (choice == 4)
  {
    div(a, b);
  }
  else if (choice == 5)
  {
    power(a, b);
  }
  else if (choice == 6)
  {
    square(a, b);
  }
  else if (choice == 7)
  {
    root(a, b);
  }

  return 0;
}