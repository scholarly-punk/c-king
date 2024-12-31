#include <stdio.h>

int main(void)
{
  printf("Enter a integer value: ");
  int x = 0;
  scanf("%d", &x);

  int polynomial =
    3 * x * x * x * x * x
    + 2 * x * x * x * x
    - 5 * x * x * x
    - x * x
    + 7 * x
    - 6;

  printf("%d\n", polynomial);
  
  return 0;
}
