#include "std_lib_facilities.h"

int main () {
    double val1;
    double val2;
    char operation;
    double result;
    string op_txt_2;
    vector<string> op_txt (3);
    op_txt[0] = "sum";
    op_txt[1] = "difference";
    op_txt[2] = "product";
    op_txt[3] = "quotient";

    cout << "Enter two values followed by an operand (+, -, *, /) to be calculated:\n" << endl;

    while (cin >> val1 >> val2 >> operation) {

        switch (operation) {

            case '+':
                result = val1 + val2;
                op_txt_2 = op_txt[0];
                break;

            case '-':
                result = val1 - val2;
                op_txt_2 = op_txt[1];
                break;

            case '*':
                result = val1 * val2;
                op_txt_2 = op_txt[2];
                break;

            case '/':
                result = val1 / val2;
                op_txt_2 = op_txt[3];
                break;

            default:
                cout << "This is not a valid operation, please try again.:" << endl;
                break;

        }

    cout << "The " << op_txt_2 << " of " << val1 << " and " << val2 << " is " << result << endl;

    }
}