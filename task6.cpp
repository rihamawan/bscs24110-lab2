#include <iostream>
using namespace std;

int main()
{
  /*
Sales Tax Calculation
Write a program that calculates the final price of an item after adding sales tax.
The program should ask for the item's price and the sales tax rate,
 then calculate and display the final amount.
Input:
Item price: $100 Sales tax rate: 8% Output:
Final price: $108
  */ 
  double itemPrice;
  double salesTaxRate;

  cout << "Enter the item price: ";
  cin >> itemPrice;

  cout << "Enter the sales tax rate (in percentage): ";
  cin >> salesTaxRate;

  double salesTax = (salesTaxRate / 100) * itemPrice;
  double finalPrice = itemPrice + salesTax;

  cout << "Final price: $" << finalPrice << endl;
    return 0;

}