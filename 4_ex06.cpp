#include "std_lib_facilities.h"

int main () {
    vector<string> num_txt (10);
    num_txt[0] = "zero";
    num_txt[1] = "one";
    num_txt[2] = "two";
    num_txt[3] = "three";
    num_txt[4] = "four";
    num_txt[5] = "five";
    num_txt[6] = "six";
    num_txt[7] = "seven";
    num_txt[8] = "eight";
    num_txt[9] = "nine";

    int digit;
    string numeral;
    int selection;

    cout << "Would you like me to show to how to\n\n";
    cout << "1. Convert from numerals to text" << endl;
    cout << "or" << endl;
    cout << "2. Convert from text to numerals" << endl;

    cin >> selection;

    switch (selection) {
        case 1:
            cout << "\nPlease enter a digit between 0 and 9 inclusive and I will show you how to spell it:" << endl;

            while (cin >> digit) {

                if (digit <=9 && digit >= 0)
                    cout << "You spell " << digit << " in English as \"" << num_txt[digit] << "\"" << endl;
                else
                    cout << "That number is outside of my spelling range, sorry." << endl;
            }
        break;

        case 2:
            cout <<  "\nPlease enter a lowercase text of a digit between 0 and 9 inclusive and I will show you the corresponding number:" << endl;

            while (cin >> numeral) {

                for (int i = 0; i<num_txt.size(); ++i) {

                    if (numeral == num_txt[i])
                        cout << "The corresponding number to your input of " << numeral << " is: " << i << endl;
                }
            }
        default:
            cout << "I don't recognise that" << endl;
    }



}