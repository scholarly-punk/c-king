#include <stdio.h>

int main(void)
{
  printf("Enter the first 12 digits of an EAN: ");
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	&d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

  const int first_sum = d2 + d4 + d6 + d8 + d10 + d12;
  const int second_sum = d1 + d3 + d5 + d7 + d9 + d11;
  const int total = second_sum + 3 * first_sum;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));
  
  return 0;
}
