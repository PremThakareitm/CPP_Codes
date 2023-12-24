//Create a program to convert temperature from Celsius to Fahrenheit and vice versa.

#include <iostream>
using namespace std;

int main(){
    double x,c,f;
    int choice;
    cout<<"Temperature Convertion\n1.Celsius to Fahrenheint\n2.Fahrenheint to Celsius"<<endl<<":";
    cin>>choice;
    switch(choice){
        case 1:
            double a;
            cout<<"Temperature in Celsius:"<<endl;
            cin>>c;
            a=c* 9/5;
            cout<<"Temperature in Fahrenheit:"<<a+32<<"F"<<endl;
            break;
        case 2:
            double b;
            cout<<"Temperature in Fahrenheint: "<<endl;
            cin>>f;
            b=f-32;
            cout<<"Temperature in Celsius: "<<b* 5/9<<"C"<<endl;
            break;
        default:
            cout<<"Invalid Input\n"<<endl;

    }
    return 0;
}