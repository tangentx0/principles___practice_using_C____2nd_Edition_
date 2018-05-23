#include "std_lib_facilities.h"

// calculate and print a table of integer values of characters
int main() {
    //char a = 'a';
    for(char a = '0'; a<='z'; ++a)
    //while(a <= 'z') {                         //while equivalent statement commented out
        cout << a << '\t' << int(a) << '\n';
     //   ++a;
    //}
}