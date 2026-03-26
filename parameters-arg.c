#include <stdio.h>
#include <math.h>

void areaofcircle(){
  int r;
  float area;
  printf("Enter the radius of the circle to find area\n");
  scanf("%d",&r);
  area=3.14*r*r;
  printf("Area of given radius is:%.2f\n",area);
}

void circumference(){
  int r;
  float circum;
  printf("Enter the radius of the circle to find circumference\n");
  scanf("%d",&r);
  circum=2*3.14*r;
  printf("Circumference of the circle is:%.2f\n",circum);
}

void calculatedistance(){
  int x1,x2,y1,y2;
  float dis;
  printf("Give the value of x1 and y1\n");
  scanf("%d %d",&x1,&y1);
  printf("Give the value of x2 and y2\n");
  scanf("%d %d",&x2,&y2);
  dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("%f\n",dis);
}

void tofahrenheit(float c)
{
  printf("Temp in Fahrenheit is :%.2f\n", (c * 1.8) + 32);
}

void tocelcius(float f)
{
  printf("Temperature in Celcius is :%.2f\n", (f - 32) * 5.0 / 9.0);
}

void odd_even()
{
  int numbers[100], length;
  int even_count = 0, odd_count = 0;
  printf("How many numbers you want to enter :\n");
  scanf("%d", &length);
  printf("Enter the %d numbers\n", length);
  for (int i = 0; i < length; i++)
  {
    scanf("%d", &numbers[i]);
  }
  for (int i = 0; i < length; i++)
  {
    if (numbers[i] % 2 == 0)
    {
      even_count++;
    }
    else
    {
      odd_count++;
    }
  }
  printf("Even: %d\n", even_count);
  printf("Odd: %d\n", odd_count);
}

int return_no(int x)
{
  return 5 + x;
} // this function should return the int value

void myFunction(char name[])
{ // name is a parameter (it is value assigned upon creating)
  printf("Hello %s\n", name);
}

void name_age(char name[], int age)  //name is variable of data type array
{
  printf("Hello %s ,you are %d years old\n", name, age);
}

int main()
{
  myFunction("Liam"); // When a parameter is passed to the function, it is called an argument
  myFunction("Jenny");
  myFunction("Anja");
  name_age("Liam", 3); // it should be in the sequence in which which order we have given parameters
  name_age("Jenny", 14);
  name_age("Anja", 30);
  printf("%d\n", return_no(4));
  printf("%d\n", return_no(41));
  odd_even();

  int choice;
  float c, f;
  printf("Enter 1 to convert celcius to fahrenheit\nEnter 2 to convert fahrenheit to celcius\n");
  scanf("%d", &choice);
  if (choice == 1)
  {
    printf("Enter the temp in celcius\n");
    scanf("%f", &c);
    tofahrenheit(c);
  }
  else if (choice == 2)
  {
    printf("Enter the temp in fahrenheit\n");
    scanf("%f", &f);
    tocelcius(f);
  }

  printf("%f\n", ceil(1.4));
  printf("%f\n", floor(1.4));

  calculatedistance();
  areaofcircle();
  circumference();
  
  return 0;
}

//What is local scope :- A variable created inside a function belongs to the local scope of that function, and can only be used inside that function, they are not accessible outside the function they throw error when they are called outside the function
//if we are creating the local and global variable by same name then c will treat it as different variable, but we should avoid using same variables as they is confusing 

//For code optimization, it is recommended to separate the declaration and the definition of the function.
//function declaration above main(), and function definition below main()
//in one function we can call another function 