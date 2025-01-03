#include <stdio.h>

int main(void)
{
  printf("Enter taxable income: ");
  int taxable_income = 0;
  scanf("%d", &taxable_income);

  float tax = 0.0f;
  if (taxable_income < 750)
    tax = taxable_income * 1.0f / 100.0f;
  else if (taxable_income <= 2250)
    tax = 7.50f + (taxable_income - 750) * 2.0f / 100.0f;
  else if (taxable_income <= 3750)
    tax = 37.50f + (taxable_income - 2250) * 3.0f / 100.0f;
  else if (taxable_income <= 5250)
    tax = 82.50f + (taxable_income - 3750) * 4.0f / 100.0f;
  else if (taxable_income <= 7000)
    tax = 142.50f + (taxable_income - 5250) * 5.0f / 100.0f;
  else
    tax = 230.00f + (taxable_income - 7000) * 6.0f / 100.0f;

  printf("Tax Payable: $%.2f\n", tax);
  
  return 0;
}
