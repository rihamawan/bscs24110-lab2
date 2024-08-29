#include <iostream>
using namespace std;

int main()
{
    /*
    Create a program that swaps the values of two variables using the third variable.
    */
   int alpha = 30;
   int beta = 45;
   cout << "Before swapping: alpha = " << alpha << ", beta = " << beta << endl;

   // Swapping values using third variable
   int temp;
   temp = alpha;
   alpha = beta;
   beta = temp;

   cout << "After swapping: alpha = " << alpha << ", beta = " << beta << endl;

   return 0;

}