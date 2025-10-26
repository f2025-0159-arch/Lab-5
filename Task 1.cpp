#include <iostream>
using namespace std;

int main() {
    

int seconds,minutes,hours,days;
cout<<"Enter the seconds:"<<endl;
cin>>seconds;

if(seconds>=86400){
    days=seconds/86400;
    cout<<"Days:"<<days;
}
else if(seconds>=3600){
    hours=seconds/3600;
    cout<<"Hours:"<<hours;
}
else if  (seconds>=60){
    minutes=seconds/60;
    cout<<"Minutes:"<<minutes;
}
else {
    cout<<"Seconds:"<<seconds;
}
    return 0;
}
