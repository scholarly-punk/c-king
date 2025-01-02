#include <stdio.h>

int main(void)
{
  printf("Enter a three-digit number: ");
  int n;
  scanf("%3d", &n);

  int d1 = n / 100;
  int d2 = n / 10 % 10;
  int d3 = n % 10;

  printf("The reversal is: %d%d%d\n", d3, d2, d1);
  
  return 0;
}
