#include "std_lib_facilities.h"

int main() {
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    string first_name;      //first name is a string type variable
    cin >> first_name;      //read the characters captured from above into string
    cout << "Dear " << first_name << ",\n\nHow are you? I am fine. I miss you.\n\n";

    cout << "Now enter the name of another friend (followed by the 'enter' key)\n";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n\n";

    char friend_sex {0};
    cout << "Is " << friend_name << " male (enter 'm') or female (enter 'f')?\n";
    cin >> friend_sex;
    if(friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n\n";
    if(friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n\n";

    cout << "Please enter the age of the recipient followed by the 'enter' key:\n";
    int age {0};
    cin >> age;
    if(age <= 0)
        simple_error("i think you've made some kind of mistake!");
    if(age >=110)
        simple_error("surely not!");

    cout << "\n\nI hear you just had a birthday and are " << age << " years old.\n";
    if(age < 12)
        cout << "Next year you will be " << age+1 << "!";
    if(age == 17)
        cout << "Next year you wil be able to vote!";
    if(age > 70)
        cout << "I hope you are enjoying retirement :)";

    cout << "\n\nyours sincerely,\n\nWill";
}