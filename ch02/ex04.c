#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  float f1, f2, f3, f4;

  printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
  printf("f1 = %f, f2 = %f, f3 = %f, f4 = %f\n", f1, f2, f3, f4);

  /*
    All of the variables are initialised to zero when I compile this
    with GCC 14 on Linux.
  */
  
  return 0;
}
