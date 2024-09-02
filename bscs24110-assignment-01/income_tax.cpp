#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	/*
	Question 2: FBR Income Tax Calculation
Question:
Objective: Understand how the Federal Board of Revenue (FBR) in Pakistan applies income
tax on individuals.
FBR year salary based tax
Instructions:
Study the FBR's income tax policy for individuals. Write a C++ program that accepts an
individual's annual income as input and calculates the income tax according to the FBR rules.
Requirements:
● Implement the tax slabs and rates accurately.
● The program should display the calculated annual and monthly tax amount and
corresponding net income after tax deduction.
	*/

	int annualSalary = 0;
	float tax = 0;
	float monthlyTaxAmount = 0;
	float netIncome = 0;
	cout << "Enter Annual Salary:Rs";
	cin >> annualSalary;
	if (annualSalary <= 600000)
	{
		tax = annualSalary * 0;
	}
	else if (annualSalary <= 1200000)
	{
		tax = (annualSalary - 600000) * (0.05);
	}
	else if (annualSalary <= 2200000)
	{
		tax = (annualSalary - 1200000) * (0.15) + 30000;
	}
	else if (annualSalary <= 3200000)
	{
		tax = (annualSalary - 2200000) * (0.25) + 180000;
	}
	else if (annualSalary <= 4100000)
	{
		tax = (annualSalary - 3200000) * (0.3) + 430000;
	}
	else
	{
		tax = (annualSalary - 4100000) * (0.35) + 700000;
	}
	monthlyTaxAmount = tax / 12;
	netIncome = annualSalary - tax;
	// setting for floating value with two decimal places//
	cout << fixed << setprecision(2);
	cout << "The Annual Tax Amount is:Rs " << tax << endl;
	cout << "The Monthly Tax Amount is:Rs " << monthlyTaxAmount << endl;
	cout << "The Net Income after tax deduction is:Rs " << netIncome;
	return 0;
}