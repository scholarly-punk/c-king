#include <stdio.h>

int main(void)
{
  printf("Enter a integer value: ");
  int x = 0;
  scanf("%d", &x);

  // Horner's Rule
  int polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("%d\n", polynomial);
  
  return 0;
}
