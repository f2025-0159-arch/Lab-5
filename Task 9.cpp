#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double weight, distance, rate, charges;

    
    cout << "Enter the weight of the package (in kg): ";
    cin >> weight;

    cout << "Enter the distance to be shipped (in miles): ";
    cin >> distance;

    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight! Must be between 0 and 20 kg." << endl;
        return 0;
    }
    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance! Must be between 10 and 3000 miles." << endl;
        return 0;
    }

   
    if (weight <= 2)
        rate = 1.10;
    else if (weight <= 6)
        rate = 2.20;
    else if (weight <= 10)
        rate = 3.70;
    else
        rate = 4.80;

    
    
    cout << "\nShipping Charges: $" << charges << endl;

    return 0;
}

