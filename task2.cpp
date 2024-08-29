#include <iostream>
using namespace std;

int main()
{
    /*
    2. Mobile Phone Bill:
○ call Minutes= 50
○ SMS_number = 430
○ Data_Usage = 10 MB
○ Service charges: 10
○ Tax : 18%
○ Call per minute charge: 1 Rs
○ Per SMS charge: 0.5 RS
○ Per MB charges :5 Rs
○ Hint: Sum all the charges, apply tax, and then add the
additional surcharge.
    
    */
    int call_minutes = 50;
    int sms_number = 430;
    float data_usage = 10;
    float service_charges = 10;
    float tax = 0.18; // as tax 18%  is equal 18/100 which is equal to 0.18
    float call_per_minute_charge = 1;
    float per_sms_charge = 0.5;
    float per_mb_charge = 5;
    float call_charges = 0;
    float sms_charges = 0;
    float data_usage_charges = 0; 
    float total_charges = 0;

    // Call Charges
    call_charges = call_minutes * call_per_minute_charge;

    // SMS Charges
    sms_charges = sms_number * per_sms_charge;

    // Data Usage Charges
    data_usage_charges = data_usage * per_mb_charge;

    float base_charges = call_charges + sms_charges + data_usage_charges;
    float tax_amount = base_charges * tax;
    total_charges = base_charges + tax_amount + service_charges;
    cout<<"Total mobile charges (Rs): "<<total_charges<<endl;
    

}