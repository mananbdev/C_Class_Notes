#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  int intValue = 10;
  float floatValue = 5.5;
  printf("The sum is: %f", intValue + floatValue); // Output: The sum is: 15.500000

  int n, result = 0, a;
  printf("Enter the number of input");
  scanf("%d", &n);
  char arr[n][20];
  printf("Enter the elements");
  for (int i = 0; i < n; i++)
  {
    scanf("%s", &arr[i]);
  }
  for (int j = 0; j < n; j++)
  {
    int digits = strlen(arr[j]);
    int num = (pow(10, digits) - 1) / 9;
    int value = atoi(arr[j]);
    int ans = value + num;
    printf("%d\n", ans);
  }

  return 0;
}