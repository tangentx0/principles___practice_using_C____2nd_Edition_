//
// Created by tangentx0 on 29/05/2018.
//

#include "std_lib_facilities.h"

/*
“Implement a little guessing game called (for some obscure reason) “Bulls and Cows.”
 The program has a vector of four different integers in the range 0 to 9 (e.g., 1234 but not 1122)
 and it is the user’s task to discover those numbers by repeated guesses.

 Say the number to be guessed is 1234 and the user guesses 1359;
 the response should be “1 bull and 1 cow” because the user got one digit (1) right and in the right position (a bull)
 and one digit (3) right but in the wrong position (a cow).

 The guessing continues until the user gets four bulls, that is, has the four digits correct and in the correct order.”

 */

//make a function which generates a random solution
vector<int> get_new_solution()
{
    vector<int> solution(4);
    solution[0] = randint(10);
    solution[1] = randint(10);
    solution[2] = randint(10);
    solution[3] = randint(10);
    return solution;
}

// turns a 4 digit integer (guess) into 4 vectors for comparison
vector<int> int_to_vector(int n)
{
    if (n>9999 || n<0) error("int_to_vector called with wrong number");
    vector<int> guess_v(4);
    guess_v[0] = n/1000 % 10;
    guess_v[1] = n/100 % 10;
    guess_v[2] = n/10 % 10;
    guess_v[3] = n % 10;
    return guess_v;
}



 int main ()
{
    int bulls = 0;
    int cows = 0;



}