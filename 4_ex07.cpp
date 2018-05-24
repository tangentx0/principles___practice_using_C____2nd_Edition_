#include "std_lib_facilities.h"

//calculate how many 'squares' of a chessboard would be needed for the creator of chess to end up with a number of
//grains fo rice

int square(int x) {
    return x*x;
}

int main () {

    int rice_wanted;
    int current_square = 1;
//    int rice_in_current_square = 1;
    int current_rice_total = 0;

    cout << "Enter the number of grains or rice you would like to be rewarded with and I will calculate ";
    cout << "how many squares of a chessboard it would take according to the emperor's reward scheme: " << endl;

    cin >> rice_wanted;

    for (int i = 0; ++i;) {
        if (current_rice_total < rice_wanted) {
            current_rice_total += square(current_square);
            ++current_square;
        }

        if (current_rice_total >= rice_wanted) {
        cout << "It would take " << current_square << " squares of the chessboard to reach this reward" << endl;
        break;
        }
    }



}