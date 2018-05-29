#include "std_lib_facilities.h"

//calculate the fibonacci sequence up to 'x'

int main ()
try {
    vector<int> series = {0, 1};        //magic numbers here make it easier to start the sequence
    int temp_no;                        //temp variable to push new numbers into during iteration
    int series_number = 0;
    char user_response = ' ';

    cout << "would you like to calculate the largest fibonnaci number that will fit into an 'int' automatically? (y/n)" << endl;
    cin >> user_response;

    switch(user_response) {
        case 'n':
        case 'N': {

            cout << "how many numbers of the fibonacci series would you like to calculate?" << endl << endl;
            cin >> series_number;

            //very basic error handling of user choosing negative numbers
            while (series_number < 0) {
                cerr
                        << "you must choose a sequence number greater than or equal to zero to be able to calculate these numbers"
                        << endl;
                cout << "try again: " << endl;
                cin >> series_number;
            }

            //calculate next number and add it to the vector
            for (int i = 2; i < series_number; ++i) {
                temp_no = series[i - 1] + series[i - 2];
                series.push_back(temp_no);
            }

            //print the entire output of the vector
            for (int i = 0; i < series_number; ++i) {
                cout << series[i] << endl;
            }
            break;
        }

        case 'y':
        case 'Y': {
            int n = 1;
            int m = 2;
            int p = 2;      //we include 0 and first 1 in here as m = 2

            while (n < m) {
                //cout << n << '\n';        //optionally print each fibonacci number
                int x = n + m;
                n = m;    // drop the lowest number
                m = x;    // add a new highest number
                ++p;      // increment sequence number
            }

            cout << "the largest Fibonacci number that fits in an int is " << n <<  " which is sequence number " << p << '\n';
            break;
        }

        default: {
            cout << "invalid input" << endl;
        }
    }
}
catch (exception& e) {
    cerr << "error: " << e.what() << endl;
    //keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Unknown exception!\n";
    return 2;
}