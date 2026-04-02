#include <stdio.h>
#include <string.h>
int main()
{
  char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%zu\n", strlen(alphabet));
  printf("%zu\n", sizeof(alphabet)); // it should be 27 but we already declare the size of memory

  // concatinate strings
  char str1[] = "Hello ";
  char str2[] = "World!";
  // concatenate str2 to str1 (result is stored in str1)
  strcat(str1, str2);

  printf("%s\n", str1);

  // Note that the size of str1 should be large enough to store the result of the two strings combined (20 in our example). but there is no error in vs code in w3 school editor there is *** buffer overflow detected ***: terminated
  // to copy one string to another   strcpy(str2 , str1)  # str2 mein copy karna hai str1 ko

  // to compare strings
  char str3[] = "Hello";
  char str4[] = "Hello";
  char str5[] = "Hi";

  // Compare str1 and str2, and print the result
  printf("%d\n", strcmp(str3, str4)); // Returns 0 (the strings are equal)

  // Compare str1 and str3, and print the result
  printf("%d\n", strcmp(str3, str5)); // Returns -4 (the strings are not equal)

  char str6[20];
  strcpy(str6, str1);
  printf("%s\n", str6);

  char myStr[] = "Learn C++, Java and Python!";
  int pos = strcspn(myStr, "y");
  printf("%d", pos);
  return 0;
}