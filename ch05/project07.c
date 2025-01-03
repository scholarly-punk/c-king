#include <stdio.h>

int main(void)
{
  printf("Enter four integers: ");
  int n1, n2, n3, n4;
  scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

  int largest, smallest = 0;
  if (n1 > n2) {
    largest = n1;
    smallest = n2;
  }
  else {
    largest = n2;
    smallest = n1;
  }
  
  if (largest > n3) {
    if (smallest > n3)
      smallest = n3;
  }
  else
    largest = n3;
    
  if (largest > n4) {
    if (smallest > n4)
      smallest = n4;
  }
  else
    largest = n4;

  printf("Largest: %d\nSmallest: %d\n", largest, smallest);
  
  return 0;
}
