#include <iostream>
using namespace std;

int main() {
    
    int month, year, days;
    cout << "Enter month number (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    if (month == 2) {
        
if (year % 400 == 0)
 days = 29;
else if (year % 100 == 0)
 days = 28;
else if (year % 4 == 0)
days = 29;
else
days = 28;
}

 if (month == 1 || month == 3 || month == 5 || month == 7 ||
month == 8 || month == 10 || month == 12)
days = 31;
else if (month == 4 || month == 6 || month == 9 || month == 11)
days = 30;

 else 
    cout << "Number of days = " << days << endl;
    cout << "Invalid month number!" << endl;

    return 0;
}
