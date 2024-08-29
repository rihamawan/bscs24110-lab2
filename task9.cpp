#include<iostream>
using namespace std;
int main()
{
    /*Income Tax Calculation
Write a program that calculates income tax based on a progressive tax system. 
The program should ask for the user's annual income and the tax rate at time, 
then calculate the tax based on specified tax brackets.
Example:
Input:
Annual income: $50,000
Tax rate : 15%
Output:
Tax: $7,500 (assuming a tax rate of 15%)
    
    */
    double annualIncome, taxRate;
    cout << "Annual income: ";
    cin >> annualIncome;
    cout << "Tax rate: ";
    cin >> taxRate;

    double tax = annualIncome * (taxRate / 100);

    cout << "Tax: $" << tax << endl;
cout << "Annual income:";
   

    return 0;
}