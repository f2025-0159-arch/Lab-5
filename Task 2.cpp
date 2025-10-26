#include <iostream>
#include <string>
using namespace std ;
int main () {;

string color1,color2;
cout<<"Enter the first primary color:"<<endl;
cin>>color1;

cout<<"Enter the second primary color:"<<endl;
cin>>color2;

if(color1 == "red"){
    if(color2 == "blue")
    cout<<"mixing red and blue gives purple color"<<endl;
    
    else if(color2 == "yellow")
    cout<<"mixing red and yellow gives orange color"<<endl;
    
    else 
    cout<<"mixing red and red gives red color"<<endl;
}
if(color1 == "blue"){
    if(color2 == "red")
    cout<<"mixing blue and red gives purple color"<<endl;
    
    else if(color2 == "yellow")
    cout<<"mixing blue and yellow gives green color"<<endl;
    
    else 
    cout<<"mixing blue and blue gives blue color"<<endl;
}

if(color1 == "yellow"){
    if(color2 == "red")
    cout<<"mixing yellow and red gives orange color"<<endl;
    
    else if(color2 == "blue")
    cout<<"mixing yellow and blue gives green color"<<endl;
    
    else 
    cout<<"mixing yellow and yellow gives yellow color"<<endl;
}
else 
cout<<"Invalid color entered";

    
    return 0;
    
}
