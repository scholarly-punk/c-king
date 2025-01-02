#include <stdio.h>

int main(void)
{
  int i = 1, j = 2;

  i += j;
  printf("%d %d\n", i, j);   // 3 2

  i--;
  printf("%d %d\n", i, j);   // 2 2

  i * j / i;                 // Does nothing
  printf("%d %d\n", i, j);   // 2 2
  printf("%d\n", i * j / i); // 2 - Doesn't change values

  i % ++j;                   // Does nothing but does increment j
  printf("%d %d\n", i, j);   // 2 3
  
  return 0;
}
