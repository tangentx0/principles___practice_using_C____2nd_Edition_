#include "std_lib_facilities.h"

int main() {
    double input1 = 0;
    double normalised_input = 0;
    string input_unit = " ";
    vector<double> extremes {0, 0};     //create vector array for the two extreme sizes
    vector<string> units {" ", " "};    //create vector array for the units of the extremes vector
    vector<double> normalised_extremes {0, 0};      //create vector for normalised (in m) extremes

    constexpr double cm_to_m = 100;
    constexpr double cm_to_inch = 2.54;
    constexpr double in_to_ft = 12;     //convert all values to m in the background

    cout << "Please enter a value plus a unit (e.g. 5cm) to be tested against the database: \n";

    for (int i = 0; cin >> input1 >> input_unit; ++i) {         //for loop capturing input, starting at i=0 and incrementing by 1

        if (input_unit == "cm")                                 //normalise the input and store in string
            normalised_input = input1 * cm_to_m;
        else if (input_unit == "in")
            normalised_input = input1 * cm_to_inch * cm_to_m;
        else if (input_unit == "ft")
            normalised_input = input1 * in_to_ft * cm_to_inch * cm_to_m;

        if (i == 0)                                             //exception for initial entry
            extremes[0] = input1, extremes[1] = input1,         //store input value in input array
            units[0] = input_unit, units[1] = input_unit,       //store input unit in unit array
            normalised_extremes[0] = normalised_input, normalised_extremes[1] = normalised_input;       //store normalised value in 3rd array
        else if (normalised_input > normalised_extremes[0])          //add number to first array entry if it's largest seen so far
            extremes[0] = input1, units[0] = input_unit;
        else if (normalised_input < normalised_extremes[1])          //add number to second array entry if it's smallest seen so far
            extremes[1] = input1, units[1] = input_unit;
        cout << "The largest value so far is: " << extremes[0] << units[0] << endl << "and the smallest value to far is: "
             << extremes[1] << units[1] << endl;
    }
}