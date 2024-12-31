#include <stdio.h>

#define TAX_PERCENTAGE 5

int main(void)
{
  printf("Enter a dollar and cents amount: $");
  float dollars_and_cents = 0.0f;
  scanf("%f", &dollars_and_cents);

  printf("With tax added: $%.2f\n",
	 dollars_and_cents + (dollars_and_cents * TAX_PERCENTAGE / 100));
  
  return 0;
}
