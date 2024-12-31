#include <stdio.h>

int main(void)
{
  printf("Enter a dollar amount (no cents): ");
  int dollars = 0;
  scanf("%d", &dollars);

  const int twenties = dollars / 20;
  printf("$20 bills: %d\n", twenties);
  dollars = dollars - twenties * 20;

  const int tens = dollars / 10;
  printf("$10 bills: %d\n", tens);
  dollars = dollars - tens * 10;

  const int fives = dollars / 5;
  printf("$5 bills: %d\n", fives);
  dollars = dollars - fives * 5;

  printf("$1 bills: %d\n", dollars);
    
  return 0;
}
