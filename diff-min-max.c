#include <stdio.h>

int main()
{
  int n;
  printf("Enter number of values: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d integers: ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int max = arr[0], min = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > max){
      max = arr[i];
    }
    if (arr[i] < min){
      min = arr[i];
    }
  }

  printf("Maximum Value: %d\n", max);
  printf("Minimum Value: %d\n", min);
  printf("Difference: %d\n", max - min);

  return 0;
}