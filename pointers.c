#include <stdio.h>
int main(){
  int myAge = 43;
  printf("%d\n",myAge); //ouput the value of myAge 
  printf("%p\n",myAge); //output the memory address of myAge
  //A pointer is a variable that stores the memory of another variable as its value
  int* ptr = &myAge;
  printf("%p\n",ptr); //output the memory address of myAge with pointer
  printf("%d\n",*ptr); //output the value of myAge with the pointer
  
  /* When used in declaration (int* ptr), it creates a pointer variable.
  When not used in declaration, it act as a dereference operator */ 

  /* we can decalre pointers with 2 ways :- 
  1. int* myNum;
  2. int *myNum;
  */

  // * operator is used to get the value stored at the memory address a pointer is pointing to
  // Pointers allow direct manipulation of data in memory

  //We can also use pointers to access the arrays 
  int myNumber[4] = {25,50,75,100};
  for(int i=0;i<4;i++){
    printf("%d\n",myNumber[i]);
  }

  //Printing the memory address of each value 
  for(int i=0;i<4;i++){
    printf("%p\n",&myNumber[i]); //Note that the last number of each of the elements' memory address is different, with an addition of 4.
  }

  printf("%p\n",myNumber);
  printf("%p\n",myNumber[0]);
  //The memory address of the first element is same as the name of array
  printf("%d\n",*myNumber);
  printf("%d\n",*(myNumber+1));
  printf("%d\n",*(myNumber+2));

  //Looping with ptrs
  int *ptr1 = myNumber;
  for (int i = 0; i < 4; i++) {
    printf("%d\n", *(ptr1 + i));
  }

  //We can also change the value with ptrs
  *myNumber=7;
  printf("%d\n",*myNumber);

  //It is also considered faster and easier to access two-dimensional arrays with pointers

  //Pointer Arithmetic 
  
  //Pointer arithmetic means changing the value of a pointer to make it point to a different element in memory

  int myNumbers[3] = {10, 20, 30};
  int *p = myNumbers;  // myNumbers[0]

  printf("%d\n", *p); // 10
  p++;           // move to myNumbers[1]
  printf("%d\n", *p); // 20
  p--;           // back to myNumbers[0]
  printf("%d\n", *p); // 10

  p += 2;        // jump to myNumbers[2]
  printf("%d\n", *p); // 30

  int myNum[5] = {10,20,30,40,50};
  int *start = &myNum[1];
  int *end = &myNum[4];
  printf("%ld\n",end-start); //end - start gives the steps to reach the end from start
  //Pointer subtraction only works when both pointers point into the same array. The result is measured in elements, not bytes.

  //Pointers don’t move in bytes — they move in units of their type
  //*pi+1 -> +1 means move to next element of that type

  int myNumbers1[2] = {1, 2};
  char letters[] = "Hi"; // 'H', 'i', '\0'
  
  int *pi = myNumbers1; // int pointer
  char *pc = letters; // char pointer
  
  printf("%p\n", (void*)pi);
  printf("%p\n", (void*)(pi + 1)); // moves by sizeof(int) (4 bytes)
  printf("%p\n", (void*)(pi + 2)); // moves by sizeof(int) (4 bytes)
  
  printf("%p\n", (void*)pc);
  printf("%p\n", (void*)(pc + 1)); // moves by 1 byte

  /*(void*) is used to tell printf:
  “this is a generic pointer — print its address safely.”*/

  //Pointer to Pointer 
  int myNum1 = 10;  //normal variable
  int *p1 = &myNum1;  //pointer to int 
  int **pp1 = &p1;  // pointer to pointer
  printf("myNum = %d\n",myNum1);
  printf("*p1 = %d\n",*p1);
  printf("**pp1 = %d\n",**pp1);

  return 0;
} 