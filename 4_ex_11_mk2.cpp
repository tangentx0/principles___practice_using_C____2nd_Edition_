#include "std_lib_facilities.h"

int main () {

    int n_primes = 0;               //initialise no. of primes user wants to find

    cout << "Tell me how many primes you would like me to find via the Sieve of Eratosthenes' method: " << endl;
    cin >> n_primes;

    vector<string> primes_norm;
    for (int i = 0; i < n_primes; ++i) {
        primes_norm.push_back("true");
    }

    cout << "Hello, you have requested " << primes_norm.size() << " primes to be found" << endl;

    for (int i = 2; i < sqrt(n_primes); ++i) {

    }


}