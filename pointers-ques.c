/*
Use pointer in c  to create an array with the input of subj and their marks
Provide the percentage of the student and sort the marks in ascending order.
*/
#include <stdio.h>

int main()
{
  int n, i, j, temp;
  float sum = 0, percentage;

  printf("Enter number of subjects: ");
  scanf("%d", &n);

  int marks[n];
  int *p = marks;

  printf("Enter marks:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", (p + i));
    sum += *(p + i);
  }

  percentage = sum / n;
  printf("Percentage = %.2f\n", percentage);

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (*(p + i) > *(p + j))
      {
        temp = *(p + i);
        *(p + i) = *(p + j);
        *(p + j) = temp;
      }
    }
  }

  printf("Sorted marks = ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", *(p + i));
  }

  return 0;
}