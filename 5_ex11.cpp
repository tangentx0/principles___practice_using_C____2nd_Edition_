#include "std_lib_facilities.h"

//calculate the fibonacci sequence up to 'x'

int main ()
try {
    vector<int> series = {0, 1};        //magic numbers here make it easier to start the sequence
    int temp_no;                        //temp variable to push new numbers into during iteration
    int series_number = 0;
    char user_response = ' ';

    cout << "Would you like to calculate the largest fibonnaci number that will fit into an 'int' automatically? (y/n)" << endl;
    cin >> user_response;

    switch(user_response) {
        case 'n':
        case 'N':

            cout << "How many numbers of the fibonacci series would you like to calculate?" << endl << endl;

            cin >> series_number;

            //very basic error handling of user choosing negative numbers
            while (series_number < 0) {
                cerr
                        << "You must choose a sequence number greater than or equal to zero to be able to calculate these numbers"
                        << endl;
                cout << "Try again: " << endl;
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

        case 'y': case 'Y':
            while (series[series.size()-1] + series[series.size()-2] > series[series.size()-1])
                series.push_back(series[series.size()-1] + series[series.size()-2]);
            cout << "The biggest Fibonacci number to fit in an int is " << series[series.size()-1] << endl;
            break;

        default:
            cout << "Invalid input" << endl;
            }
}
catch (exception& e) {
    cerr << "Error: " << e.what() << endl;
    //keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Unknown exception!\n";
    return 2;
}