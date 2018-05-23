#include "std_lib_facilities.h"

int main() {
    int input = 0;
    int multiplier = 0;
    int i =1;
    int result = 0;

    cout << "Enter the two numbers you wish to multiply, separated by a space, and then press 'enter':\n";
    cin >> input >> multiplier;

    while(i<=multiplier) {
        cout << (result = result + input) << '\n';
        ++i;
    }
}