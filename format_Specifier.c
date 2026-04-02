#include <stdio.h>
int main()
{
  int x;
  char ch;
  unsigned int ui = -100;
  printf("%u\n", ui);

  scanf("%d", &x);
  scanf(" %c", &ch); // we should use <space> before %c because we have input int earlier

  printf("%c", ch);

  // to input name using scanf and with spaces generally we use fgets but without it we can use this way

  char name[30];
  scanf("%[^\n]", name);
  printf("%s", name);
}
