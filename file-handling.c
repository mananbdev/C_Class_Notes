#include <stdio.h>

// no coding questions from this topic
// file path mei forward slash hatakar back slash lagana hai har jagah

int main(){
  FILE *f1;
  //f1 = fopen(fileName, mode); // syntax
  // w mode also creates a new file if it wasn't created in the first place
  
  // open a file in writing mode
  // f1 = fopen("hello.txt", "w"); // write only
  
  //f1 = fopen("hello.txt", "a"); // appends to the file without deleting original contents
  //f1 = fopen("hello.txt", "r"); // read only
  f1 = fopen("hello.txt", "r+"); // isme agar file nahi hogi toh you'll get an error
  
  if(f1 == NULL){
    printf("Error opening file\n");
    return 1;
  }

  // write some text to the file
  fprintf(f1, "Name: Rahul"); // replace first line with more text
  fprintf(f1, "Marks: 89");
  // fgets only reads one line, to read multiple lines, use loop

  int marks;
  char name[20];
  // reading from a file using fscanf()
  // fscanf() reads only one line, to read the entire line, use loops
  fscanf("f1, %s %d", name, &marks);

  printf("Name: %s\n", name);
  printf("Marks: %d", marks);

  char ch = fgetc(f1);
  // fgetc() - to read character, fputc() - to write character
  // fgets() - to read string, fputs() - to write string
  
  // close the file
  fclose(f1);
  printf("File created successfully\n");

  // binary files store data in machine format. They are faster. Has a format .dat
  // use "wb" mode to fopen()
  // use "rb" to read binary file
  //fwrite(); // to write binary data

  return 0;
}