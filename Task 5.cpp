#include <iostream>
#include <cstdlib>   
#include <ctime>    
using namespace std;

int main() {
    
    int num1 = rand() % 300 + 100;  
    int num2 = rand() % 350 + 100;  

    int answer;

    
    cout << "   " << num1 << endl;
    cout << "  + " << num2 << endl;
    
    cout << "Enter your answer: ";
    cin >> answer;

    
    int correct = num1 + num2;

    if (answer == correct)
        cout << " Congratulations! Your answer is correct!" << endl;
    else
        cout << " wrong answer! The correct answer is: " << correct << endl;

    return 0;
}
