#include <iostream>

int main() {

    /*


    Splitting a Bill Among Friends
    Write a program that calculates how much each person should pay when splitting a bill among friends. The program should ask for the total bill amount and the number of people, then divide the bill equally.
    Example:
    Input:
    Total bill: $120
    Number of people: 4 Output:
    Each person pays: $30

    */

    double totalBill, personCount;
    std::cout << "Enter the total bill amount: ";
    std::cin >> totalBill;
    std::cout << "Enter the number of persons: ";
    std::cin >> personCount;

    double eachPersonPays = totalBill / personCount;

    std::cout << "Each person pays: $" << eachPersonPays << std::endl;

    return 0;
}
