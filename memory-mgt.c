#include <stdio.h>
#include <stdlib.h>
int main()
{
  /*
  The process of reserving memory is called allocation. The way to allocate memory depends on the type of memory.

  C has two types of memory: Static memory and dynamic memory.

  Static memory :- It is a memory that is reserved for variables before the program runs. Allocation of static memory is also known as compile time memory allocation.
  */

  int students[20];
  printf("%zu\n", sizeof(students)); // Here 80 bytes space is already reserved for 20 elements.(20*4)

  /*
  But here is some drawback in static as you have assigned the 20 elements and if only 12 elements are used then 32 bytes(8*4) is wasted and it may slow down the program by increasing run time and here comes the role of dynamic memory

  Dynamic memory :- Dynamic memory is memory that is allocated after the program starts running. Allocation of dynamic memory can also be referred to as runtime memory allocation.

  Dynamic memory does not belong to a variable, it can only be accessed with pointers.
  To allocate dynamic memory, you can use the malloc() or calloc() functions. It is necessary to include the <stdlib.h> header to use them. The malloc() and calloc() functions allocate some memory and return a pointer to its address.

  int *ptr1 = malloc(size);  //it has one parameter
  int *ptr2 = calloc(amount, size); //it has two parameters

  Size of pointer is 8 bytes(64 bit) , 4 bytes(32 bit)
  */

  int *student;
  int numStudents = 12;
  student = calloc(numStudents, sizeof(*student));
  printf("%d\n", numStudents * sizeof(*student)); // 48 bytes

  

  return 0;
}