#include<iostream>
using namespace std;
int main()
{
    /*
    Monthly Saving Goal
Write a program that helps someone plan their savings. The program should ask for the user's monthly income, their total monthly expenses, and the percentage of income they want to save. It should then calculate and display how much they can save each month.
Example:
Input:
Monthly income: $3000 Monthly expenses: $2000 Savings goal: 10% Output:
Monthly savings: $300
    */
    double monthlyIncome, monthlyExpenses, savingsGoal;
    cout << "Enter your monthly income: ";
    cin >> monthlyIncome;
    cout << "Enter your monthly expenses: ";
    cin >> monthlyExpenses;
    cout << "Enter your savings goal (in percentage): ";
    cin >> savingsGoal;

    double monthlySavings = monthlyIncome * (savingsGoal / 100);
    cout << "Monthly savings: $" << monthlySavings << endl;

 
   return 0;
}