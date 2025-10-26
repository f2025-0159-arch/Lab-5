#include <iostream>
using namespace std;

int main() {
    double calories, fatgrams, caloriesfromfat, fatpercentage;

    cout << "Enter the total number of calories: ";
    cin >> calories;

    cout << "Enter the number of fat grams: ";
    cin >> fatgrams;

    
    if (calories < 0 || fatgrams < 0) {
        cout << "Error: Calories and fat grams cannot be less than 0." << endl;

 
    caloriesFromFat = fatgrams * 9;

    if (caloriesfromfat > calories) {
        cout << "Error: Calories from fat cannot be greater than total calories." << endl;
    fat ercentage = (caloriesfromfat / calories) * 100;

    cout << "Percentage of calories from fat: " << fatPercentage << "%" << endl;

    if (fat percentage < 30)
        cout << "This food is low in fat." << endl;
  return 0;
}

