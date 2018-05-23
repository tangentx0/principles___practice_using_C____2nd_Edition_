#include "std_lib_facilities.h"

int main() {
    double d = 0;

    while (cin>>d) {    //repeat the statements below
        //as long as we type in numbers
        int i = d;      //try to squeeze a double into a into an int
        char c = i;     //try to squeeze an int into a char
        int i2 = c;     //try to get the integer value of the character
        cout << "d==" << d          //the original double
             << "\ni==" << i      //converted to the int
             << "\ni2==" << i2     //the int value of the char
             << "\nchar(" << c << ")\n";  //the char
    }
}