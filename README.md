# Loan-Cost
## Problem
Loans can be expensive and it is important to figure out how to budget for them. To this you need to know

How much money you will be paying each month
How much the loan will cost you

Your program should ask the user for the following information in this order

The amount they are borrowing
The annual (yearly) interest rate
The number of months the payments are to be made over
After collecting the above information your program report the monthly payment as well as the total cost of the loan.

## Important Considerations
Note that the annual (yearly) interest rate is given but then payments are made every month. This is a very common way that loans are specified but in order for our formula to work the interest rate and the number of payments need to be in "the same units." Either annual(yearly) interest rate and number of years to pay or monthly interest and number of months to pay.

We will be doing the second option: monthly interest and number of months to pay. To convert from annual interest rate to monthly interest rate divide the annual interest rate by 12.

## Requirements
Your Program must compile with the -Wall, -Werror, and -Wextra options enabled
Use doubles and not floats for all numbers that could have a decimal point in them
Print all double to 2 decimal places
Assumptions
All input is valid
As stated before, we will be assuming that payments are made monthly (the norm) so you will need to divide the annual interest rate by 12 to get the monthly interest rate to use in your calculations.
The examples provided do not represent all possible input you can receive so make sure to test thoroughly on your machine
## Examples


## Example 1
Please enter the amount of money you borrowed: $1000

Please enter the annual interest rate: .05

Please enter the number of payments to be made: 12

A loan of $1000.00 with an annual interest of 0.05 paid off over 12 months will have monthly payments of $85.61.

In total, you will pay $1027.29, making the cost of your loan $27.29.

## Example 2
Please enter the amount of money you borrowed: $60000

Please enter the annual interest rate: .07

Please enter the number of payments to be made: 120

A loan of $60000.00 with an annual interest of 0.07 paid off over 120 months will have monthly payments of $696.65.

In total, you will pay $83598.11, making the cost of your loan $23598.11.
