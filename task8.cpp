#include<iostream>
using namespace std;
int main()
{
/*Simple Interest Calculation
Write a program that calculates the simple interest on a loan or investment. The program should ask for the principal amount, the interest rate, and the time period (in years). It should then calculate and display the total interest earned.
Example:
Input:
Principal: $1000 Interest rate: 5% Time: 3 years Output:
Simple interest: $150
*/

double principal, interestRate, time, simpleInterest;

cout << "Enter principal amount: ";
cin >> principal;

cout << "Enter interest rate (in percentage): ";
cin >> interestRate;

cout << "Enter time period (in years): ";
cin >> time;

// Calculate simple interest
simpleInterest = (principal * interestRate * time) / 100;

cout << "Simple Interest: $" << simpleInterest << endl;

return 0;
}
