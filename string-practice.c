#include <stdio.h>
#include <string.h>

int main()
{
  // accessing in the string
  char carName[] = "Defender";
  int length = sizeof(carName) / sizeof(carName[0]);
  for (int i = 0; i < length; i++)
  {
    printf("%c\n", carName[i]);
  }

  // strcat()
  char myStr[20] = "Hello";
  strcat(myStr, " world!");
  printf("%s\n", myStr);

  // strcmp()  --> it compares value on the basis of ascii values not the length only
  char a[] = "apple";
  char b[] = "apple";

  int result = strcmp(a, b);
  if (result == 0)
    printf("Strings are equal\n");
  else
    printf("Strings are not equal\n");

  // strcpy()
  char str1[100];
  strcpy(str1, a);
  printf("%s\n", str1);

  // strcspn()  --> It counts characters in str1 until it hits any character that exists in str2.
  char str2[] = "hello123";
  char str3[] = "123";
  int res = strcspn(str2, str3);
  printf("%d\n", res);

  // strlen()  --> returns the length of the string
  printf("%d\n", strlen(str1));

  // strncat()
  char myStr1[20] = "Hello";
  strncat(myStr1, " World!", 5); // 5 is the how many words to be added
  printf("%s\n", myStr1);

  // strncmp() --> it compares the first n characters

  // strncpy() --> it copy the first n characters and if we do copy on the existing string then it overwrites the value like
  char str5[] = "Hello World!";
  char str6[] = "Write code!";
  strncpy(str6, str5, 6);
  printf("%s\n", str5);
  printf("%s\n", str6);
  printf("%d",5||0 &&2);
  return 0;
}