#include <stdio.h>

int main(void)
{
  printf("Enter a three-digit number: ");
  int d1, d2, d3;
  scanf("%1d%1d%1d", &d1, &d2, &d3);

  printf("The reversal is: %d%d%d\n", d3, d2, d1);
  
  return 0;
}
