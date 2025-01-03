#include <stdio.h>

int main(void)
{
  printf("Enter an integer (with less than 5 digits): ");
  int n;
  scanf("%d", &n);

  printf("The number %d has ", n);
  if (n >= 0  && n <= 9)
    printf("1");
  else if (n >= 10 && n <= 99)
    printf("2");
  else if (n >= 100 && n <= 999)
    printf("3");
  else if (n >= 1000 && n <= 9999)
    printf("4");
  else
    printf("too many");

  if (n >= 0 && n <= 9)
    printf( " digit");
  else
    printf(" digits");

  printf(".\n");
  
  return 0;
}
