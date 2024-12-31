/* Adds two fractions */
#include <stdio.h>

int main(void)
{
  printf("Enter first fraction: ");
  int numerator1, denom1;
  scanf("%d / %d", &numerator1, &denom1);

  printf("Enter second fraction: ");
  int numerator2, denom2;
  scanf("%d / %d", &numerator2, &denom2);

  const int result_numerator = numerator1 * denom2 + numerator2 * denom1;
  const int result_denom = denom1 * denom2;
  printf("The sum is %d/%d\n", result_numerator, result_denom);
  
  return 0;
}
