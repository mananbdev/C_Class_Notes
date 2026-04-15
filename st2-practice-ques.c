#include <stdio.h>

struct Mobile
{
  char brand[50];
  int quantity;
  int price;
};

struct employee
{
  char name[50];
  int salary;
};

struct student
{
  char name[50];
  int daysLate;
};

struct order
{
  char itemName[50];
  int quantity;
  int price;
};

int main()
{
  int n;
  printf("Enter number of mobiles: ");
  scanf("%d", &n);

  struct Mobile m[n];
  int totalBill = 0;

  printf("Enter brand quantity price:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%s %d %d", m[i].brand, &m[i].quantity, &m[i].price);
  }

  printf("\n--- Mobile Bill ---\n");
  for (int i = 0; i < n; i++)
  {
    int total = m[i].quantity * m[i].price;
    printf("Brand: %s, Total: %d\n", m[i].brand, total);
    totalBill += total;
  }

  printf("Grand Total: %d\n\n", totalBill);

  //--------------------------------------------------------------------------------------------------------//

  int n1;
  printf("Enter number of employees: ");
  scanf("%d", &n1);

  struct employee e[n1];

  printf("Enter name and salary:\n");
  for (int i = 0; i < n1; i++)
  {
    scanf("%s %d", e[i].name, &e[i].salary);
  }

  printf("\n--- Employee Salary ---\n");
  for (int i = 0; i < n1; i++)
  {
    int totalSalary = e[i].salary + ((0.3) * e[i].salary);
    printf("Name: %s, Total Salary: %d\n", e[i].name, totalSalary);
  }

  //--------------------------------------------------------------------------------------------------------//

  int n2, bill = 0;
  printf("\nEnter number of students: ");
  scanf("%d", &n2);

  struct student s[n2];

  printf("Enter name and days late:\n");
  for (int i = 0; i < n2; i++)
  {
    scanf("%s %d", s[i].name, &s[i].daysLate);
    bill = 2 * s[i].daysLate;
    if (s[i].daysLate > 10)
    {
      bill = bill + 50;
    }
  }

  printf("\n--- Student Fine ---\n");
  for (int i = 0; i < n2; i++)
  {
    printf("Name: %s, Fine: %d\n", s[i].name, bill);
  }

  //--------------------------------------------------------------------------------------------------------//

  int n3, total = 0;
  printf("\nEnter number of orders: ");
  scanf("%d", &n3);

  struct order o[n3];

  printf("Enter item quantity price:\n");
  for (int i = 0; i < n3; i++)
  {
    scanf("%s %d %d", o[i].itemName, &o[i].quantity, &o[i].price);
    total = o[i].quantity * o[i].price;
    if (total < 200)
    {
      total += 50;
    }
  }

  printf("\n--- Order Bill ---\n");
  for (int i = 0; i < n3; i++)
  {
    printf("Item: %s, Total: %d\n", o[i].itemName, total);
  }

  return 0;
}