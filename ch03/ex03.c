#include <stdio.h>

int main(void)
{
  int x;
  // a
  scanf("%d", &x);
  printf("%d\n", x);

  // b
  scanf(" %d", &x);
  printf("%d\n", x);

  // a and b equivalent

  int y, z;
  // c
  scanf("%d-%d-%d", &x, &y, &z);
  printf("%d %d %d\n", x, y, z);

  // d
  scanf("%d -%d -%d", &x, &y, &z);
  printf("%d %d %d\n", x, y, z);

  // c and d equivalent

  float a;

  // e
  scanf("%f", &a);
  printf("%f\n", a);

  // f
  scanf("%f ", &a);
  printf("%f\n", a);

  // e and f not equivalent, f needs a space entered after the number.

  float b;
  // g
  scanf("%f,%f", &a, &b);
  printf("%f %f\n", a, b);

  // h
  scanf("%f, %f", &a, &b);
  printf("%f %f\n", a, b);

  // g and h are equivalent
  
  return 0;
}
