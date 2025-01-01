/* Adds two fractions */
#include <stdio.h>

int main(void)
{
  printf("Enter two fractions separated by a plus sign\n");
  int numerator1, denom1, numerator2, denom2;
  scanf("%d / %d + %d / %d", &numerator1, &denom1, &numerator2, &denom2);

  const int result_numerator = numerator1 * denom2 + numerator2 * denom1;
  const int result_denom = denom1 * denom2;
  printf("The sum is %d/%d\n", result_numerator, result_denom);
  
  return 0;
}
