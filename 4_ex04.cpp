#include "std_lib_facilities.h"

int main () {
    cout << "Think of a number between 1 and 100 inclusive." << endl;
    cout << "Respond using the keyboard if whether your number is larger (using 'l') or smaller (using 's')"
            "than the number shown. If you number is shown you can indicate complete ('c')" << endl;

    int guess = 50;                   //start guessing in the middle of the range
    int counter = 0;
    char answer = ' ';               //take guess response

    vector<int> differences (6);    //use a vector to store iteration sizes
    differences[0] = 25;
    differences[1] = 13;
    differences[2] = 6;
    differences[3] = 3;
    differences[4] = 2;
    differences[5] = 1;

    while (answer != 'c') {
        cout << "\nMy guess is " << guess << endl;
        ++counter;
        cout << "Is this correct (c), or is your number larger (l) or smaller (s)?:" << endl;

        cin >> answer;

        switch (answer) {
            case 'c':
                break;
            case 'l':
                if (counter <=differences.size())
                    guess += differences[counter-1];
                else ++guess;
                break;
            case 's':
                if (counter <=differences.size())
                    guess -= differences[counter-1];
                else --guess;
                break;
            default:
                cout << "This is not a valid answer, please try again" << endl;
                --counter;
        }

        if (guess > 100 || guess < 1) {
            cout << "Your number must be between 1 and 100 inclusive)" << endl;
        }
        if (counter == 7 && answer != 'c') {
            cout << "Are you sure you gave me the correct answers. I should have guessed by now..." << endl;
        }
    }

}