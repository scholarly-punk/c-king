#include <stdio.h>

#define PI 3.14159f

int main(void)
{
  printf("Enter radius for a sphere: ");
  float radius = 0.0f;
  scanf("%f", &radius);
  
  printf("Area of sphere with radius of %.2f = %0.2f\n",
	 radius,
	 4.0f/3.0f * PI * radius * radius * radius);
  
  return 0;
}
