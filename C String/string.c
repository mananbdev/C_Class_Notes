#include <stdio.h>
#include <ctype.h>
int main()
{
char str[100];
    int count = 0;
    int i;

    printf("Enter your string: ");
    fgets(str,100,stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
                ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
                count++;
            }
        }
    }

    printf("Number of consonants: %d\n", count);

    // modify strings
    char greet[] = "Hello World";
    greet[0] = 'J';
    printf("%s\n", greet);

    // Loop through strings
    char carName[] = "Volvo";
    int j;
    for (j = 0; j < 5; ++j)
    {
        printf("%c\n", carName[j]);
    }
    

    return 0;
}