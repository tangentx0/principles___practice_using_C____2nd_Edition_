#include "std_lib_facilities.h"

int main() {
    cout << "This program will convert from miles to kilometers for you.\n\nPlease enter the number of miles you wish to convert:\n";
    double miles {0};
    cin >> miles;
    cout << "\n" << miles << " miles is equal to " << miles*1.609 << " kilometers.\n\nNow let's try something else...\n\n";

    cout << "Please enter two floating point (with significant figures after the decimal point) values (and press 'enter'):\n";
    double val1 {0};
    double val2 {0};
    double larger {0};
    double smaller {0};
    double sum {0};
    double difference {0};
    double product {0};
    double ratio {0};

    cin >> val1 >> val2;

    if(val1>val2)
        larger = val1, smaller = val2;
    else
        larger = val2, smaller = val1;
    sum = val1+val2;
    difference = larger-smaller;
    product = val1*val2;
    ratio = val1/val2;        //cast val1 to a double so that division won't equal zero

    cout << "\nThe larger of these two values is " << larger << " and the smaller of the two is " << smaller;
    cout << "\nThe sum of these two values is " << sum;
    cout << "\nThe difference between the values is " << difference;
    cout << "\nThe product of the two values is " << product;
    cout << "\nThe ratio between the two values is " << ratio << ":1\n";

    cout << "\nNow we will try some integer sorting...\nPlease enter 3 integer values and I will sort them into ascending order for you automatically:\n";
    cout << "Enter three integers:\n";
    array<int, 3> numbers;
    for (auto &n : numbers){
        if (!(cin >> n)){
            cout << "Failed reading number\n";
            return -1;
        }
    }
    for (auto &n : numbers){
        cout << n << ' ';
    }
    cout << " in sorted order: ";
    sort(begin(numbers), end(numbers));
    for (auto &n : numbers){
        cout << n << ' ';
    }
    cout << '\n';
}