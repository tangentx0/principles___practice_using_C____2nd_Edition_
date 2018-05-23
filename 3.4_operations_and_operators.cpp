#include "std_lib_facilities.h"

// simple program to practice using operators


int main ()
{
    cout << "Please enter a floating point value\n";
    double n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << n*3
         << "\ntwice n == " << n+n
         << "\nn squared == " << n*n
         << "\nhalf of n == " << n/2
         << "\nsquare root of n == " << sqrt(n)
         << '\n';      //another way to write newline

    cout << "\n\nPlease enter two names:\n";
    string first;
    string second;
    cin >> first >> second;     //read two strings in series
    if (first == second) cout << "That's the same name twice!\n";
    if (first < second)
        cout << first << "is alphabetically before " << second << '\n';
    if (first > second)
        cout << first << " is alphabetically after " << second << '\n';


}