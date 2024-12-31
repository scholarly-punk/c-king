#include <stdio.h>

int main(void)
{
  printf("Enter amount of loan: ");
  float loan_balance = 0.0f;
  scanf("%f", &loan_balance);

  printf("Enter interest rate: ");
  float interest_rate = 0.0f;
  scanf("%f", &interest_rate);
  const float monthly_interest_rate = interest_rate / 100.0f / 12.0f; 

  printf("Enter monthly payment: ");
  float monthly_payment = 0.0f;
  scanf("%f", &monthly_payment);

  loan_balance = loan_balance - monthly_payment + loan_balance * monthly_interest_rate;
  printf("Balance remaining after first payment: $%.2f\n", loan_balance);

  loan_balance = loan_balance - monthly_payment + loan_balance * monthly_interest_rate;
  printf("Balance remaining after second payment: $%.2f\n", loan_balance);

  loan_balance = loan_balance - monthly_payment + loan_balance * monthly_interest_rate;
  printf("Balance remaining after third payment: $%.2f\n", loan_balance);
    
  return 0;
}
