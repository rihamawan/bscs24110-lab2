#include <iostream>
using namespace std;

int main()
{
    /*
1. Electricity Bill:
○ previous_meter_reading: 550 units
○ current_meter_reading: 2000 units
○ Rate per unit: 60
○ Meter_rent: 50
○ Tax: 18%
○ Hint: Calculate the base amount by multiplying units by the
rate, add the fixed charge, then apply the tax.
    */

    int previous_meter_reading = 550;
    int current_meter_reading = 2000;
    int rate_per_unit = 60;
    int meter_rent = 50;
    double tax = 0.18; // as 18% of the rate is equal 18/100 which is equal to 0.18
    int units_consumed = current_meter_reading - previous_meter_reading;
    double base_amount = units_consumed * rate_per_unit;
    double total_amount_without_tax = base_amount + meter_rent ;
    double total_amount_with_tax = total_amount_without_tax + (total_amount_without_tax * tax);
    cout << "Electricity Bill (Rs): " << total_amount_with_tax << endl;


    
    }
