#include <stdio.h>

int main()
{
  int units;
  printf("Enter electricity units consumed: ");
  scanf("%d", &units);

  float bill = 0;
  if (units <= 100)
  {
    bill = units * 5;
  }
  else if (units <= 200)
  {
    bill = 100 * 5 + (units - 100) * 7;
  }
  else if (units <= 300)
  {
    bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
  }
  else
  {
    bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
  }

  printf("Energy Charges: %.2f\n", bill);

  float subtotal = bill + 150;

  float discount = 0;
  if (units < 150)
  {
    discount = subtotal * 0.05;
  }
  printf("Discount: %.2f\n", discount);

  float after_discount = subtotal - discount;

  float tax = after_discount * 0.08;
  printf("Tax: %.2f\n", tax);

  float final_bill = after_discount + tax;

  if (final_bill < 300)
  {
    final_bill = 300;
  }

  printf("Final Bill: %.2f\n", final_bill);

  return 0;
}