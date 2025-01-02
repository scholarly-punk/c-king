#include <stdio.h>

int main(void)
{
  int n = 5;

  if (n == 1 - 10)
    printf("n is between 1 and 10\n");

  // Yes Legal
  // 1 - 10 = -9
  // 5 == -9. No
  // No printf
  
  return 0;
}
