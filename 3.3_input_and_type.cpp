#include "std_lib_facilities.h"

// read name and age


int main ()
{
    cout << "Please enter your fist name and age\n";
    string first_name = "???";      // initialise string with "???" to provide predictable output if user fucks it up
    double age = -1;     //same here with the age
    cin >> first_name;
    cin >> age;
    cout << "Hello, " << first_name << ", you are " << age*12 << " months old!\n";


}