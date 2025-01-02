#include <stdio.h>

int main(void)
{
  printf("Enter a number between 32767: ");
  int n;
  scanf("%d", &n);

  printf("My Octal: %d%d%d%d%d\n",
	 n / 8 / 8 / 8 / 8 % 8,
	 n / 8 / 8 / 8 % 8,
	 n / 8 / 8 % 8,
	 n / 8 % 8,
	 n % 8);
  
  printf("printfs octal: %05o\n", n);
  
  return 0;
}
