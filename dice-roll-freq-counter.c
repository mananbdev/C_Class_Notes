#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int n;
  printf("Enter the value of N: ");
  scanf("%d", &n);

  int freq[7] = {0}; // index 1-6

  srand(time(0));

  printf("Dice values: ");
  for (int i = 0; i < n; i++)
  {
    int roll = (rand() % 6) + 1;
    printf("%d ", roll);
    freq[roll]++;
  }
  printf("\n");

  for (int i = 1; i <= 6; i++)
  {
    printf("Frequency of %d = %d\n", i, freq[i]);
  }

  return 0;
}