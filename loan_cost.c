#include <math.h>
#include <stdio.h>

int main(void) {
  double principal;
  double annualInterestRate;
  int numPayments;
  double monthlyInterestRate;
  double monthlyPayment;

  printf("Please enter the amount of money you borrowed: $");
  scanf("%lf", &principal);
  printf("Please enter the annual interest rate: ");
  scanf("%lf", &annualInterestRate);
  printf("Please enter the number of payments to be made: ");
  scanf("%d", &numPayments);

  monthlyInterestRate = annualInterestRate / 12.0;

  double numerator = principal * monthlyInterestRate;
  double denominator = (1 - (pow(1 + monthlyInterestRate, numPayments * -1.0)));

  monthlyPayment = numerator / denominator;

  printf("A loan of $%.2f with an annual interest of %.2f paid off over %d "
         "months will have monthly payments of $%.2f.\n\n",
         principal, annualInterestRate, numPayments, monthlyPayment);

  double totalLoan = monthlyPayment * (double)numPayments;

  printf("In total, you will pay $%.2f, making the cost of your loan $%.2f.",
         totalLoan, totalLoan - principal);

  return 0;
}