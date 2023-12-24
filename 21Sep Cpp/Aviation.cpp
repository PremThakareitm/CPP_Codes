// Build a code with multiple conditions with help of C++ as you are a pilot and user will give input of the plane height in the air and on realtime plane is on height of 33,000 feet. 
// So, if height is on 10,000 say pilot to “Go around”. 
// If height is between 5000 to 2000 ask pilot to “Open Gears of tyres”. 
// If height is greater than 2000 or less than 1000. “Open flaps” 
// If Height is less than 1000. “Land the plane and apply reverse trust” 

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the Height of the plane in Feet:";
    cin>>a;
    if (a>=10000){
        cout<< "Get at the Height 10,000 Feets" <<endl;
    }
    else if (a==10000){
        cout<<"Go Around" <<endl;
    }
    else if (5000>=a && a>=2000){
        cout<<"Open Gears of Tyres" <<endl;
    }
    else if (2000>=a && a>=1000){
        cout<<"Open Flaps" <<endl;
    }
    else if (a<=1000){
        cout<<"Land the plane and apply reverse trust" <<endl;
    }
    else if (a==0){
        cout<<"See U Soon" <<endl;
    }
    }
