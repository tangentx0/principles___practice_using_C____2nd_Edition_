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
{
    double c = 0;
    cout << "Please enter the temperature in celsius that you would like converted to Kelvin:" << endl;
    cin >> c;               //take input reading
    double k = ctok(c);     //convert temperature

    cout << k << endl;      //print result

}
