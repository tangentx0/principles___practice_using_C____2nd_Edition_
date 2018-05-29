#include "std_lib_facilities.h"

int main()
{
    vector<double> temps;       //temperatures

    for (double temp; cin>>temp; )      //read and put into temps
        temps.push_back(temp);

    double sum = 0;
    double high_temp = -1000;
    double low_temp = 1000;

    for (int x : temps)
    {
        if(x > high_temp) high_temp = x;        //find the highest temperature
        if(x < low_temp) low_temp = x;      //find the lowest temperature
        sum +=x;        //compute sum
    }

    cout << "High temperature: " << high_temp << endl;
    cout << "Low temperature: " << low_temp << endl;
    cout << "Average temperature: " << sum/temps.size() << endl;
}