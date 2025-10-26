#include <iostream>
using namespace std ;
int main () {

int num1,num2,num3;

cout<<"Enter three numbers:"<<endl;
cin>>num1>>num2>>num3;

int middle;

if ((num1 > num2 && num1 < num3) || (num1 < num3 && num1 > num2)){
cout<<"middle =num1"<<endl;
}
    
 else if ((num2 > num1 && num2 < num3) || (num2 < num3 && num2 > num1)) {
     
cout<<"middle = num2"<<endl;
    }
    
else {
       cout<<"middle = num3";
      
    }

    cout<< "The middle number is: "<< middle<< endl;
    

    return 0;
}
