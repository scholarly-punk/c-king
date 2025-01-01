#include <stdio.h>

int main(void)
{
  printf("Enter 13 digit ISBN: ");
  int gs1_prefix = 0, group_id = 0, publisher_code = 0, item_number = 0, check_digit = 0;
  scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &publisher_code, &item_number, &check_digit);

  printf("GS1 prefix: %d\n"
	 "Group identifier: %d\n"
	 "Publisher code: %d\n"
	 "Item number: %d\n"
	 "Check digit: %d\n",
	 gs1_prefix, group_id, publisher_code, item_number, check_digit);
  
  return 0;
}
