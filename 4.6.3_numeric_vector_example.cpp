#include "std_lib_facilities.h"

int main() {
    //read some temperatures into a vector
    vector<double> temps;   //temperatures
    for (double temp; cin >> temp;)     //read into temp vector
        temps.push_back(temp);      //put temp into 'temps' vector
                                    //do something else

    //compute mean temperature
    double sum = 0;
    for(double x : temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    //compute median temperature
    sort(temps);        //sort temperatures by size
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';

}