#include <iostream>
using namespace std;

int main()
{
/*
Calculate a Restaurant Bill with Tip
Write a program that calculates the total cost of a meal at a restaurant. The program should ask for the cost of the meal and the percentage tip the user wants to leave, then calculate and display the total amount to be paid.
Example:
Input:
Meal cost: $50 Tip: 15% Output:
Total bill: $57.50
*/

    float mealCost, tipPercentage, tipAmount, totalBill;
    
    cout<< "Enter the cost of the meal: ";
    cin>> mealCost;
    cout<< "Enter the percentage tip (in decimal form): ";
    cin>> tipPercentage;
    tipAmount = mealCost * tipPercentage;
    totalBill = mealCost + tipAmount;
    cout << "Total bill: $" << totalBill << endl;

    return 0; // program complete with success 

}