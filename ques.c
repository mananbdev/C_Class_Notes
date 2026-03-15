#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // int n, i, j, temp;
    // printf("Enter number of students: ");
    // scanf("%d", &n);
    // int marks[n];
    // printf("Enter marks:\n");
    // for (i = 0; i < n; i++) {
    //     scanf("%d", &marks[i]);
    // }
    // for (i = 0; i < n; i++) {
    //     for (j = i + 1; j < n; j++) {
    //         if (marks[i] < marks[j]) {
    //             temp = marks[i];
    //             marks[i] = marks[j];
    //             marks[j] = temp;
    //         }
    //     }
    // }
    // printf("Second largest mark is: %d\n", marks[1]);
    //
    //
    //
    // int num, originalNum, remainder, result = 0;
    // printf("Enter a 3-digit number: ");
    // scanf("%d", &num);
    // originalNum = num;
    // while (num != 0) {
    //     remainder = num % 10;
    //     result += remainder * remainder * remainder;
    //     num /= 10;
    // }
    // if (result == originalNum) {
    //     printf("%d is an Armstrong number\n", originalNum);
    // }
    // else {
    //     printf("%d is NOT an Armstrong number\n", originalNum);
    // }
    //
    // printf("My num is %d",num);
    //
    //   char stat[99];
    //   int count = 1;
    //   printf("Enter your statement");
    //   fgets(stat , 40 , stdin);
    //   for (int i=0 ; stat[i]!='\0'; i++){
    //     if (stat[i] == ' '){
    //         count++;
    //     }
    //   }
    //   printf("%d\n",count);
    //
    //
    //   char str[100],ch;
    //   int cou=0;
    //   printf("Enter your char");
    //   fgets(str , 40 , stdin);
    //   printf("Enter your value that have to be searched");
    //   scanf("%c",&ch);
    //   for (int i=0 ; str[i]!='\0';i++){
    //     if (stat[i] ==ch){
    //     cou++;
    //   }
    // }
    //   printf("%d\n",count);
    //
    //
    //
    //
    // int size;
    // int even_count = 0, odd_count = 0;
    // int i;
    // printf("Enter the size of the array: ");
    // scanf("%d", &size);
    // int arr[size];
    // printf("Enter %d elements in the array:\n", size);
    // for (i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // for (i = 0; i < size; i++) {
    //     if (arr[i] % 2 == 0) {
    //         even_count++;
    //     } else {
    //         odd_count++;
    //     }
    // }
    // printf("Number of even elements: %d\n", even_count);
    // printf("Number of odd elements: %d\n", odd_count);
    //
    char s1[100], s2[100];
    int count[256] = {0};
    int i;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    if (strlen(s1) != strlen(s2))
    {
        printf("Not Anagrams\n");
        return 0;
    }

    for (i = 0; s1[i] != '\0'; i++)
    {
        count[(int)s1[i]]++; // Increment for char in string 1
        count[(int)s2[i]]--; // Decrement for char in string 2
    }
    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Not Anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}
