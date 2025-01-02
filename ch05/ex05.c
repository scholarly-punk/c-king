#include <stdio.h>

int main(void)
{
  int n = 0;
  
  if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");

  // n >= 1 evaluates to 0
  // 0 <= 10 evaluates to 1
  // So printf is executed.
  
  return 0;
}
