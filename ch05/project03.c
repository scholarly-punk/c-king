/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
  printf("Enter number of shares: ");
  int number_shares = 0;
  scanf("%d", &number_shares);

  printf("Enter price per share: ");
  float price_per_share = 0.0f;
  scanf("%f", &price_per_share);
  
  const float trade_value = number_shares * price_per_share;

  // Your broker
  float commission = 0.0f;
  if (trade_value < 2500.00f)
    commission = 30.00f + 0.017f * trade_value;
  else if (trade_value < 6250.00f)
    commission = 56.00f + 0.0066f * trade_value;
  else if (trade_value < 20000.00f)
    commission = 76.00f + 0.0034f * trade_value;
  else if (trade_value < 50000.00f)
    commission = 100.00f + 0.0022f * trade_value;
  else if (trade_value < 500000.00f)
    commission = 155.00f + 0.0011f * trade_value;
  else
    commission = 255.00f + 0.0009f * trade_value;

  if (commission < 39.00f)
    commission = 39.00f;

  // Rival broker
  float rival_commission =
    33.00f + (number_shares < 2000 ? 0.03f : 0.02f) * number_shares;

  printf("Commission: $%.2f\nRival commission: $%.2f\n",
	 commission, rival_commission);
  
  return 0;
}
