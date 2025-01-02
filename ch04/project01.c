#include <stdio.h>

int main(void)
{
  printf("Enter a two-digit number: ");
  int n;
  scanf("%2d", &n);

  int d1 = n / 10;
  int d2 = n % 10;

  printf("The reversal is: %d%d\n", d2, d1);
  
  return 0;
}
