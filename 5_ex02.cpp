#include "std_lib_facilities.h"

//function to convert from Celsius to Kelvin
double ctok (double c)
{
    if (c <= -273.15) error("Temperature below absolute zero!");        //check temp input is sane
    double k = c + 273.15;
    return k;
}

//function to convert from Kelvin to Celsius
double ktoc (double k)
{
    if (k < 0) error("Temperature below absolute zero!");        //check temp input is sane
    double c = k - 273.15;
    return c;
}


//main program
int main ()
try {
    double input_temp = 0;           //initialise input temperature
    char input_unit = ' ';           //initialise input unit
    double output_temp = 0;          //initialise output temperature
    char output_unit = ' ';          //initialise output unit

    cout << "Please enter the temperature and unit (c or K) that you would like converted:" << endl;
    cin >> input_temp >> input_unit;               //take input reading

    if (input_unit == 'c' || input_unit == 'C') {
        output_temp = ctok(input_temp);
        output_unit = 'K';
    }

    else if (input_unit == 'k' || input_unit == 'K') {
        output_temp = ktoc(input_temp);
        output_unit = 'C';
    }
    else {
        cerr << "Illegal units used";
    }

    cout << input_temp << input_unit << " is equal to " << output_temp << output_unit << endl;
    return 0;
}
catch (exception& e) {
    cerr << "Error: " << e.what() << endl;
    return 1;
}
catch (...) {
    cerr << "Unknown exception!\n";
    return 2;
}