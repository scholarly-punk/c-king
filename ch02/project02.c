#include <stdio.h>

#define PI 3.14159f

int main(void)
{
  float radius = 10.0f;
  printf("Area of sphere with radius of %f = %0.2f\n",
	 radius,
	 4.0f/3.0f * PI * radius * radius * radius);
  
  return 0;
}
