#include <stdio.h>

int main(void)
{
  printf("Enter first date (dd/mm/yy): ");
  int day1, month1, year1;
  scanf("%2d/%2d/%2d", &day1, &month1, &year1);
  int date1 = year1 * 10000 + month1 * 100 + day1;
  
  printf("Enter second date (dd/mm/yy): ");
  int day2, month2, year2;
  scanf("%2d/%2d/%2d", &day2, &month2, &year2);
  int date2 = year2 * 10000 + month2 * 100 + day2;

  if (date1 < date2)
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
	   day1, month1, year1, day2, month2, year2);
  else
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n",
	   day2, month2, year2, day1, month1, year1);
  
  return 0;
}
