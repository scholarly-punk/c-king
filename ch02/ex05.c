#include <stdio.h>

int main(void)
{
  // INVALID identifier: int 100_bottles = 0;

  // The rest are valid
  int _100_bottles = 0;
  int one__hundred__bottles = 0;
  int bottles_by_the_hundred_ = 0;
  
  return 0;
}
