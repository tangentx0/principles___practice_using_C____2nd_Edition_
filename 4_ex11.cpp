#include "std_lib_facilities.h"

vector<int> primes_norm;    //create a vector which will store the primes found

bool is_prime(int n) {      //create a function which results in true if number is a prime

    for (int i = 0; primes_norm[i]<=sqrt(n); ++i) {     //loop through divisors less than sqrt() of input to see if any divide
        if (n % primes_norm[i] == 0)        //if quotient == 0 then return 'false' as number is not prime
            return false;
    }
    return true;        //if for loop completes without false then return true
}

int main() {

    cout << "How many primes should I find?" << endl;
    int n_primes = 0;
    cin >> n_primes;

    primes_norm.push_back(2);       //manually add '2' to the list of primes in case user chooses to find 1 prime only

    int i = 3;                      //start at i=3 for the next loop

    while (primes_norm.size() < n_primes) {     //iterate through loop until we have found the number of primes user wants
        if (is_prime(i))                        //run 'i' through "is_prime" function to see if true
            primes_norm.push_back(i);           //push the true values to the stack
        i+=2;                                   //iterate i value by 2 according to the Sieve of Eratosthenes
    }

    for (int i = 0; i < primes_norm.size(); ++i)    //next loop through the primes vector
        cout << primes_norm[i] << endl;             //print primes to the screen
}