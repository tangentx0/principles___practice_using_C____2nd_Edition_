#include "std_lib_facilities.h"

int main() {
    double distance_in;
    double total_distance;
    double smallest_distance;
    double largest_distance;
    vector<double> distances;

    for (int i = 0; cin >> distance_in; ++i) {
        distances.push_back(distance_in);
        sort(distances);
        total_distance += distance_in;

    }

    cout << "The smallest distance between cities is: " << distances[0] << " miles" << endl;
    cout << "The largest distance between cities is: " << distances[distances.size()-1] << " miles" << endl;
    cout << "The total distances between all cities entered is " << total_distance << " miles" << endl;
    cout << "The mean distance between all cities is: " << total_distance/distances.size() << " miles" << endl;

}