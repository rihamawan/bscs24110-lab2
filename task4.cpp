#include <iostream>
using namespace std;

int main()
{
/*
Write a program that swaps the values of two variables but without
using 3rd variable.
*/

    int a = 5, b = 10;
    cout << "Before swapping, a is: " << a << endl;
    cout << "Before swapping, b is: " << b << endl;
    
    // Swap values without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping, a is: " << a << endl;
    cout << "After swapping, b is: " << b << endl;

    return 0;
    
    return 0;
}