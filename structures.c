#include <stdio.h>
#include <string.h>

struct Consumer
{
  int id;
  int units;
  int totalBill;
};

struct Student
{
  char name[50];
  int marks[5];
  int percentage;
};

struct myStructure1
{
  int myNum;
  char myLetter;
  char myString[30]; // String
};

struct myStructure
{
  int LaptopId;
  int LaptopModelNumber;
  int LaptopPrice;
};

struct Item
{
  char name[50];
  int quantity;
  int price;
  int total;
};

int main()
{
  // Structures (also called structs) are a way to group several related variables into one place.
  // unlike an array the structure can contain diff data type

  // create a structure variable of Mystructure called s1
  struct myStructure xps;
  struct myStructure insp;
  struct myStructure1 s1;

  // assigning value to xps
  xps.LaptopId = 13;
  xps.LaptopModelNumber = 9900;
  xps.LaptopPrice = 99000;

  insp.LaptopId = 11;
  insp.LaptopModelNumber = 7700;
  insp.LaptopPrice = 71000;

  // Printing the value
  printf("xps Laptop ID number : %d\n", xps.LaptopId);
  printf("xps Laptop model number : %d\n", xps.LaptopModelNumber);
  printf("xps Laptop Price : %d\n", xps.LaptopPrice);

  printf("insp Laptop ID number : %d\n", insp.LaptopId);
  printf("insp Laptop model number : %d\n", insp.LaptopModelNumber);
  printf("insp Laptop Price : %d\n", insp.LaptopPrice);

  strcpy(s1.myString, "Some text");
  printf("My string: %s\n", s1.myString);

  int n;
  printf("Enter N\n");
  scanf("%d", &n);

  struct Student s[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%s", s[i].name);

    int sum = 0;
    for (int j = 0; j < 5; j++)
    {
      scanf("%d", &s[i].marks[j]);
      sum += s[i].marks[j];
    }

    s[i].percentage = sum / 5;
  }

  for (int i = 0; i < n; i++)
  {
    if (s[i].percentage >= 85)
    {
      printf("%s %d Full Scholarship\n", s[i].name, s[i].percentage);
    }
    else if (s[i].percentage >= 70)
    {
      printf("%s %d Half Scholarship\n", s[i].name, s[i].percentage);
    }
    else
    {
      printf("%s %d No Scholarship\n", s[i].name, s[i].percentage);
    }
  }
  int n1;
  printf("Enter no of consumers\n");
  scanf("%d", &n1);

  struct Consumer c[n1];

  for (int i = 0; i < n1; i++)
  {
    scanf("%d %d", &c[i].id, &c[i].units);

    int u = c[i].units;

    if (u <= 100)
    {
      c[i].totalBill = u * 5;
    }
    else if (u <= 200)
    {
      c[i].totalBill = (100 * 5) + (u - 100) * 7;
    }
    else
    {
      c[i].totalBill = (100 * 5) + (100 * 7) + (u - 200) * 10;
    }
  }

  for (int i = 0; i < n1; i++)
  {
    printf("%d %d\n", c[i].id, c[i].totalBill);
  }

  struct Item items[3];
  int overallTotal = 0;

  for (int i = 0; i < 3; i++)
  {
    scanf("%s", items[i].name);
    scanf("%d", &items[i].quantity);
    scanf("%d", &items[i].price);

    items[i].total = items[i].quantity * items[i].price;  
    overallTotal += items[i].total;
  }

  for (int i = 0; i < 3; i++)
  {
    printf("%s : %d\n", items[i].name, items[i].total);
  }

  printf("Total Bill: %d\n", overallTotal);

  return 0;
}