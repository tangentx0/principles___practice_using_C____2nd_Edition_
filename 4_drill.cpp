#include "std_lib_facilities.h"

int main() {
    double input1 = 0;
    double normalised_input = 0;
    string input_unit = " ";
    bool input_valid;
    double sum_of_vector = 0;

    vector<double> extremes {0, 0};                 //create vector array for the two extreme sizes
    vector<string> units {" ", " "};                //create vector array for the units of the extremes vector
    vector<double> normalised_values;     //create vector for normalised extremes (in m)

    constexpr double cm_to_m = 100;
    constexpr double cm_to_inch = 2.54;
    constexpr double in_to_ft = 12;     //convert all values to m in the background

    cout << "Please enter a value plus a unit (e.g. '5 cm') to be tested against the database: \n\n";

    for (int i = 0; cin >> input1 >> input_unit; ++i) {         //for loop capturing input, starting at i=0 and incrementing by 1

        input_valid = false;

        if (input_unit == "cm")                                 //normalise the input and store in string if unit valid
            normalised_input = input1 / cm_to_m,
            input_valid = true;
        else if (input_unit == "in")
            normalised_input = input1 * cm_to_inch / cm_to_m,
            input_valid = true;
        else if (input_unit == "ft")
            normalised_input = input1 * in_to_ft * cm_to_inch / cm_to_m,
            input_valid = true;

        //exception for initial entry
        if (i == 0 && input_valid == true)
            extremes[0] = input1, extremes[1] = input1,
            units[0] = input_unit, units[1] = input_unit,
            normalised_values.push_back(normalised_input),
            sum_of_vector = normalised_input;

        //add number to first array entry if it's largest seen so far
        else if (normalised_input > normalised_values[0] && input_valid == true)
            extremes[0] = input1, units[0] = input_unit,
            normalised_values.push_back(normalised_input),
            sum_of_vector += normalised_input;

        //add number to second array entry if it's smallest seen so far
        else if (normalised_input < normalised_values[1] && input_valid == true)
            extremes[1] = input1, units[1] = input_unit,
            normalised_values.push_back(normalised_input),
            sum_of_vector += normalised_input;

        //reject invalid inputs
        else
            cout << "invalid input \n\n";

        sort(normalised_values);

        for (int j = 0; j<normalised_values.size(); ++j) {
            cout << normalised_values[j] << endl;
         }

         cout << '\n' << "the largest value so far is: " << extremes[0] << units[0] << endl << "the smallest value to far is: "
             << extremes[1] << units[1] << endl << "the sum of all inputs (in m) is " << sum_of_vector << "m " << endl;
    }
}