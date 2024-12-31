#include <stdio.h>

int main(void)
{
  printf("Enter item number: ");
  int item_number = 0;
  scanf("%d", &item_number);

  printf("Enter unit price: ");
  float unit_price = 0.0f;
  scanf("%f", &unit_price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  int day = 0, month = 0, year = 0;
  scanf("%d/%d/%d", &day, &month, &year);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%02d/%02d/%4d\n", item_number, unit_price, day, month, year);
  
  return 0;
}
