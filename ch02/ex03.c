/* Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
  int height = 12;
  int length = 10;
  int width = 14;
  int volume = height * length * width;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n",
	 (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

  return 0;
}
