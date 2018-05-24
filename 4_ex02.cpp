#include "std_lib_facilities.h"

int main() {
    //read some temperatures into a vector
    vector<double> temps;   //temperatures
    double median = 0;

    for (double temp; cin >> temp;)     //read into temp vector
        temps.push_back(temp);          //put temp into 'temps' vector

        sort(temps);        //sort temperatures by size

        if (temps.size() % 2 == 1)
            median = temps[temps.size()/2-1];
        else
            median = (temps[temps.size()/2] + temps[temps.size()/2 - 1]) / 2;

        cout << "Median temperature: " << median << '\n';
}