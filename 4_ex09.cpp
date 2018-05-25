#include "std_lib_facilities.h"

int main() {
    char user_guess = ' ';
    string computer_guess = " ";
    vector<string> guesses {"rock", "paper", "scissors"};
    int divisor = guesses.size();
    int user_score = 0;
    int computer_score = 0;

    cout << "Please enter your choice of rock (r), paper (p) or scissors (s), best of 5!: " << endl;

    for (int i = 0; i<5; ++i) {
        cout << "Computer guess locked in, now enter yours:" << endl;
        cin >> user_guess;
        computer_guess = guesses[(rand()%divisor)];


        switch(user_guess) {
            case 'r':
                if(computer_guess == "paper") {
                    cout << "I guess " << computer_guess << " ... I win!" << endl;
                    ++computer_score;
                }
                else if(computer_guess == "scissors") {
                    cout << "I guess " << computer_guess << " ... You win!" << endl;
                    ++user_score;
                }
                else if(computer_guess == "rock") {
                    cout << "I guess " << computer_guess << " too! ... It's a draw!" << endl;
                }
                else {
                    cout << "I don't recognise that guess sorry. Try again" << endl;
                }
                cout << "Let's go again!" << endl;
            break;
            case 'p':
                if(computer_guess == "scissors") {
                    cout << "I guess " << computer_guess << " ... I win!" << endl;
                    ++computer_score;
                }
                else if(computer_guess == "rock") {
                    cout << "I guess " << computer_guess << " ... You win!" << endl;
                    ++user_score;
                }
                else if(computer_guess == "paper") {
                    cout << "I guess " << computer_guess << " too! ... It's a draw!" << endl;
                }
                else {
                    cout << "I don't recognise that guess sorry. Try again" << endl;
                }
                cout << "Let's go again:" << endl;
            break;
            case 's':
                if(computer_guess == "rock") {
                    cout << "I guess " << computer_guess << " ... I win!" << endl;
                    ++computer_score;
                }
                else if(computer_guess == "paper") {
                    cout << "I guess " << computer_guess << " ... You win!" << endl;
                    ++user_score;
                }
                else if(computer_guess == "scissors") {
                    cout << "I guess " << computer_guess << " too! ... It's a draw!" << endl;
                }
                else {
                    cout << "I don't recognise that guess sorry. Try again" << endl;
                }
                cout << "Let's go again:" << endl;
            break;
        }
    }

    cout << "and the scores are: " << endl << endl << "Player: " << user_score << endl << "Computer: " << computer_score << endl;

    if(user_score > computer_score) {
        cout << "Well done, you won" << endl;
    }
    else if (computer_score > user_score) {
        cout << "Unlucky, I win" << endl;
    }
    else {
        cout << "It's a draw!" << endl;
    }

}