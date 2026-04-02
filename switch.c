#include <stdio.h>

int main()
{
  int day;
  printf("Enter the number which should be between 1 and 7\n");
  scanf("%d", &day);
  switch (day)
  {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  case 7:
    printf("Sunday\n");
    break;
  default:
    printf("Enter the valid day\n");
  }

  // switch case not only for int

  char grade = 'B';
  switch (grade)
  {
  case 'A':
    printf("Excellent\n");
    break;
  case 'B':
    printf("Good\n");
    break; // Works fine with char
  default:
    printf("Invalid\n");
  }

  return 0;
}