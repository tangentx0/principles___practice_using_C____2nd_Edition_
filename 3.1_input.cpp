#include "std_lib_facilities.h"

int main ()
{
    cout << "Please enter your first name (followed by 'enter'):\n";
    string first_name;      //first name is a string type variable
    cin >> first_name;      //read the characters captured from above into string
    cout << "Hello, " << first_name << "!\n";
}