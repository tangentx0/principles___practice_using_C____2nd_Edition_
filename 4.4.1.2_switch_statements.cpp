#include "std_lib_facilities.h"

int main() {
    cout << "Please enter a single digit:\n";
    char a;
    cin >> a;
    switch (a) {
    case '0': case '2': case '4': case '6': case '8':
        cout << "is even\n";
        break;
    case '1': case '3': case '5': case '7': case '9':
        cout << "is odd\n";
        break;
    default:
        cout << "is not a digit\n";
        break;
    }

    cout << "Now we will do a currency conversion for you. Which currency do you want to convert into GBP, yen (y), euros (e) or USD (u)?\n";
    constexpr double gbp_eur = 1.1408;
    constexpr double gbp_usd = 1.345;
    constexpr double gbp_yen = 149.205;
    char currency = ' ';
    double amount {0};

    cin >> currency;

    cout << "\nNow enter the amount you wish to convert:\n";

    cin >> amount;

    switch(currency) {
        case 'y':
            cout << amount << " yen is £" << amount/gbp_yen << '\n';
            break;
        case 'e':
            cout << amount << " euros is £" << amount/gbp_eur << '\n';
            break;
        case 'u':
            cout << amount << " USD is £" << amount/gbp_usd << '\n';
            break;
        default:
            cout << "Sorry, I don't know the currency '" << currency << "'\n";
            break;
    }

}