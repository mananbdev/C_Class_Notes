#include <stdio.h>

// Define enum first -> it is compulsory to do this without this you cannot use enums below
enum Level {
    low,
    medium,
    high
};

int main(){
  //An enum is a special type that represents a group of constants (unchangeable values).
  // Create an enum variable and assign a value to it
  enum Level myVar = medium;
  printf("%d", myVar);

  return 0;
}