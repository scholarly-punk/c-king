#include <stdio.h>

int main(void)
{
  printf("Enter a 24-hour time: ");
  int hours, minutes;
  scanf("%2d:%2d", &hours, &minutes);

  int twelve_hours = hours == 0 ? 12 : hours <= 12 ? hours : hours - 12;  
  printf("Equivalent 24 time: %d:%02d ", twelve_hours, minutes);

  if (hours < 12)
    printf("AM\n");
  else
    printf("PM\n");
  
  return 0;
}
