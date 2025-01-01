#include <stdio.h>

int main(void)
{
  int i = 0, j = 0;

  i = 5;
  j = ++i * 3 - 3;
  printf("%d %d\n", i, j);  // 6 15

  i = 5;
  j = 3 - 2 * i++;
  printf("%d %d\n", i, j);  // 6 -7

  i = 7;
  j = 3 * i-- + 2;
  printf("%d %d\n", i, j);  // 6 23

  i = 7;
  j = 3 + --i * 2;
  printf("%d %d\n", i, j);  // 6 15
  
  return 0;
}
