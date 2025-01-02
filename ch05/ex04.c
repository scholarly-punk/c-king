#include <stdio.h>

int main(void)
{
  int i, j;

  i = 1, j = 2;
  printf("%d\n",
	 i < j ? -1 :
	 i == j ? 0 : 1); // -1

  i = 1, j = 1;
  printf("%d\n",
	 i < j ? -1 :
	 i == j ? 0 : 1); // 0

    i = 2, j = 1;
    printf("%d\n",
	   i < j ? -1 :
	   i == j ? 0 : 1); // 1
    
  return 0;
}
