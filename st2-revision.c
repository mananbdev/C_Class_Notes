#include <stdio.h>
#include <stdlib.h>

enum level
{
  i = 5,
  j,
  k,
  l,
  m
};

typedef float Temperature; // The typedef keyword lets you create a new name (an alias) for an existing type. This can make complex declarations easier to read, and your code easier to maintain.

int main()
{

  enum level myvar = m;
  printf("%d\n", myvar);

  /*A union is similar to a struct in that it can store members of different data types.
  In a struct, each member has its own memory.
  In a union, all members share the same memory, which means you can only use one of the values at a time.*/

  Temperature today = 25.5;
  Temperature tomorrow = 18.6;

  printf("Today: %.1f C\n", today);
  printf("Tomorrow: %.1f C\n", tomorrow);

  /*
  The process of reserving memory is called allocation
  C has two types of memory: Static memory and dynamic memory.

  Static memory is memory that is reserved for variables before the program runs. Allocation of static memory is also known as compile time memory allocation.
  You cannot change the size of memory
  
  Dynamic memory is memory that is allocated after the program starts running. Allocation of dynamic memory can also be referred to as runtime memory allocation.
  In this you have full control over how much memory is being used at the time. 
  To allocate dynamic memory, you can use the malloc() or calloc() functions.

  The malloc() and calloc() functions allocate some memory and return a pointer to its address.
  The malloc() function has one parameter, size, which specifies how much memory to allocate, measured in bytes.

  The calloc() function has two parameters:
  amount - Specifies the amount of items to allocate
  size - Specifies the size of each item measured in bytes

  Main functions of dynamic memory allocation :- 
  1. malloc()
  2. calloc()
  3. free()
  4. realloc()

  malloc() -> takes no of bytes to be allocated & returns a pointer of type void
  ptr=(int *) malloc(5*sizeof(int));

  calloc() -> continuous allocation , initializes with 0 , it returns the void type pointer
  ptr=(int *) calloc(5,sizeof(int));  //typecast from void to int

  free() -> we use it to free memory that is allocated using malloc & calloc
  free(ptr);

  realloc() -> reallocate (increase or decrease) memory using the same pointer & size
  ptr=realloc(ptr,newSize); 
  */

  return 0;
}