#include <stdio.h>

int main(void)
{
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  int area_code = 0, prefix = 0, line_number = 0;
  scanf("(%d) %d-%d", &area_code, &prefix, &line_number);

  printf("You entered %d.%d.%d\n", area_code, prefix, line_number);
  
  return 0;
}
