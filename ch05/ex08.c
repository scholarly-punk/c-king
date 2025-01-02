#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int age = 12;
  bool teenager;
  if (age >= 13)
    if (age <= 19)
      teenager = true;
    else
      teenager = false;
  else if (age < 13)
    teenager = false;

  printf("%d\n", teenager);

  bool teenager2 = age >= 13 && age <= 19;
  printf("%d\n", teenager2);
  
  return 0;
}
