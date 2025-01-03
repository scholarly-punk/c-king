#include <stdio.h>

#define MINS_PER_HOUR 60

int main(void)
{
  /* I implemented this with nothing more than we have been introduced to. */
  /* It was tedious!! */
  printf("Enter a 24 hour time (hh::mm): ");
  int hours, minutes;
  scanf("%2d:%2d", &hours, &minutes);

  const int MINS_SINCE_MIDNIGHT = hours * MINS_PER_HOUR + minutes;

  // Calculate the diffences in time
  const int DIFFERENCE_01 = (8 * MINS_PER_HOUR) - MINS_SINCE_MIDNIGHT;
  const int DIFFERENCE_02 = (9 * MINS_PER_HOUR + 43) - MINS_SINCE_MIDNIGHT;
  const int DIFFERENCE_03 = (11 * MINS_PER_HOUR + 19) - MINS_SINCE_MIDNIGHT;
  const int DIFFERENCE_04 = (12 * MINS_PER_HOUR + 47) - MINS_SINCE_MIDNIGHT;
  const int DIFFERENCE_05 = (14 * MINS_PER_HOUR) - MINS_SINCE_MIDNIGHT;
  const int DIFFERENCE_06 = (15 * MINS_PER_HOUR + 45) - MINS_SINCE_MIDNIGHT;
  const int DIFFERENCE_07 = (19 * MINS_PER_HOUR) - MINS_SINCE_MIDNIGHT;
  const int DIFFERENCE_08 = (21 * MINS_PER_HOUR + 45) - MINS_SINCE_MIDNIGHT;

  // Find the smallest difference
  int smallest_difference = DIFFERENCE_01 < 0 ? -DIFFERENCE_01 : DIFFERENCE_01;
  int flight = 1;
  if (smallest_difference > (DIFFERENCE_02 < 0 ? -DIFFERENCE_02 : DIFFERENCE_02)) {
    smallest_difference = (DIFFERENCE_02 < 0 ? -DIFFERENCE_02 : DIFFERENCE_02);
    flight = 2;
  }
  if (smallest_difference > (DIFFERENCE_03 < 0 ? -DIFFERENCE_03 : DIFFERENCE_03)) {
    smallest_difference = (DIFFERENCE_03 < 0 ? -DIFFERENCE_03 : DIFFERENCE_03);
    flight = 3;
  }
  if (smallest_difference > (DIFFERENCE_04 < 0 ? -DIFFERENCE_04 : DIFFERENCE_04)) {
    smallest_difference = (DIFFERENCE_04 < 0 ? -DIFFERENCE_04 : DIFFERENCE_04);
    flight = 4;
  }
  if (smallest_difference > (DIFFERENCE_05 < 0 ? -DIFFERENCE_05 : DIFFERENCE_05)) {
    smallest_difference = (DIFFERENCE_05 < 0 ? -DIFFERENCE_05 : DIFFERENCE_05);
    flight = 5;
  }
  if (smallest_difference > (DIFFERENCE_06 < 0 ? -DIFFERENCE_06 : DIFFERENCE_06)) {
    smallest_difference = (DIFFERENCE_06 < 0 ? -DIFFERENCE_06 : DIFFERENCE_06);
    flight = 6;
  }
  if (smallest_difference > (DIFFERENCE_07 < 0 ? -DIFFERENCE_07 : DIFFERENCE_07)) {
    smallest_difference = (DIFFERENCE_07 < 0 ? -DIFFERENCE_07 : DIFFERENCE_07);
    flight = 7;
  }
  if (smallest_difference > (DIFFERENCE_08 < 0 ? -DIFFERENCE_08 : DIFFERENCE_08)) {
    smallest_difference = (DIFFERENCE_08 < 0 ? -DIFFERENCE_08 : DIFFERENCE_08);
    flight = 8;
  }

  printf("Closest departure time is ");
  switch (flight) {
  case 1: printf("8:00 a.m., arriving at 10:16 a.m.\n"); break;
  case 2: printf("9:43 a.m., arriving at 11:52 a.m.\n"); break;
  case 3: printf("11:19 a.m., arriving at 1:31 p.m.\n"); break;
  case 4: printf("12:47 p.m., arriving at 3:00 p.m.\n"); break;
  case 5: printf("2:00 p.m., arriving at 4:08 p.m.\n"); break;
  case 6: printf("3:45 p.m., arriving at 5:55 p.m.\n"); break;
  case 7: printf("7:00 p.m., arriving at 9:20 p.m.\n"); break;
  case 8: printf("9:45 p.m., arriving at 11:58 p.m.\n"); break;
  }
  
  return 0;
}
