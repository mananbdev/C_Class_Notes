#include <stdio.h>
int main(){

  FILE *fptr;
  fptr=fopen("filename.txt","w");
  fprintf(fptr,"Some Text");
  fclose(fptr);
}