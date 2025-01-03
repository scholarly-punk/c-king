#include <stdio.h>

int main(void)
{
  printf("Enter numerical grade: ");
  int grade;
  scanf("%d", &grade);
  
  if (grade > 100 || grade < 0) {
    printf("Invalid grade\n");
  }
  else {
    printf("Letter grade: ");
    if (grade == 100)
      printf("A\n");
    else {
      int tens_digit = grade / 10;
      switch (tens_digit) {
      case 9: printf("A\n"); break;
      case 8: printf("B\n"); break;
      case 7: printf("C\n"); break;
      case 6: printf("D\n"); break;
      default: printf("F\n");
      }
    }
  }
  
  return 0;
}
