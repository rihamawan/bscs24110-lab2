#include <iostream>
using namespace std;

int main() {
/*
*/

    int previousMeterReading = 0;
    int currentMeterReading = 0;
    int unitsConsumed = 0;
    float costOf100Units =100 * 12.21;
    float costOf200Units = costOf100Units + (100 * 14.53);
    float costOf300Units = costOf200Units + (100 * 31.51);
    float costOf400Units = costOf300Units + (100 * 38.41);
    float costOf500Units = costOf400Units + (100 * 41.62);
    float costOf600Units = costOf500Units + (100 * 43.04);
    float costOf700Units = costOf600Units + (100 * 44.18);
    float totalBill;
    cout<< "Enter Current Meter Reading: ";
    cin>> currentMeterReading;
    cout<< "Enter Previous Meter Reading: ";
    cin>> previousMeterReading;
    unitsConsumed = currentMeterReading - previousMeterReading;
    cout << "Units comsumed : " << unitsConsumed << endl;
    if(unitsConsumed<=100)
    {
        totalBill = unitsConsumed*12.21;
    }
    else if(unitsConsumed<=200)
    {
        totalBill = ((unitsConsumed - 100) * 14.53) + costOf100Units;
    }
    else if (unitsConsumed <= 300)
    {
        totalBill = ((unitsConsumed - 200) * 31.51) + costOf200Units;
    }
    else if(unitsConsumed<=400)
    {
        totalBill = ((unitsConsumed - 300) * 38.41) + costOf300Units;
    }
    else if (unitsConsumed<=500)
    {
        totalBill = ((unitsConsumed - 400) * 41.62) + costOf400Units;
    }
    else if (unitsConsumed<=600)
    {
        totalBill = ((unitsConsumed - 500) * 43.04) + costOf500Units;
    }
    else if(unitsConsumed<=700)
    {
        totalBill = ((unitsConsumed - 600) * 44.18) + costOf600Units;
    }
    else
    {
        totalBill = ((unitsConsumed - 700) * 49.10) + costOf700Units;
    }
    cout << "Total Bill is Rs: " << totalBill;
    return 0;
}