#include <stdio.h>

int main(void)
{
  int a = 550, b = 240, c = 130, d = 50, e = 10;
  printf("Original: %d\n", a * b - c * d + e);
  printf("Parenthesised: %d\n", ((a * b) - (c * d)) + e);

  printf("Original: %d\n", a / b % c / d);
  printf("Parenthesised: %d\n", ((a / b) % c) / d);

  printf("Original: %d\n", - a - b + c - + d);
  printf("Parenthesised: %d\n", (((- a) - b) + c) - (+ d));

  printf("Original: %d\n", a * - b / c - d);
  printf("Parenthesised: %d\n", ((a * (- b)) / c) - d);
    
  return 0;
}
