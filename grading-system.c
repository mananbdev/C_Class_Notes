#include <stdio.h>

int main()
{
    int students;
    scanf("%d", &students);
    int N[students];
    char Grade;
    for (int i = 0; i < students; i++)
    {
        scanf("%d", &N[i]);
    }
    for (int j = 0; j < students; j++)
    {
        if (N[j] >= 0 && N[j] <= 100)
        {

            if (N[j] < 40 && N[j] > 35)
            {
                N[j] += 5;
            }
            if (N[j] >= 90)
            {
                Grade = 'A';
            }
            else if (N[j] >= 75 && N[j] < 90)
            {
                Grade = 'B';
            }
            else if (N[j] >= 60 && N[j] < 75)
            {
                Grade = 'C';
            }
            else if (N[j] >= 40 && N[j] < 60)
            {
                Grade = 'D';
            }
            else
            {
                Grade = 'F';
            }
            printf("Student = %d Marks = %d , Grade = %c \n", j + 1, N[j], Grade);
        }
    }

    return 0;
}