//Implement a C++ program that simulates a simple ATM machine, allowing users to check their balance, deposit, or withdraw money using a switch statement.

#include <iostream>
using namespace std;


int main(){
    double a=10000.0,b,w;
    int c;
    cout<<"\nWELCOME TO ATM\n";
    start:
    cout<<"\n1.Check the Balance\n2.Deposit the Money\n3.Withdraw the Money\n4.Exit:"<<endl;
    cin>>c;
    switch(c){
        case 1:
            cout<<"Your Balance is:"<<a;
            goto start;
        case 2:
            cout<<"Enter the Amount to Deposite:";
            cin>>b;
            a+=b;
            cout<<a;
            goto start;
        case 3:
            cout<<"Enter the Amount to Withdraw:";
            cin>>w;
            w>=b;
            a-=w;
            cout<<a;
            goto start;
        case 4:
            cout<<"Thank You!";
            break;
        default:
            cout<<"Invaild Choice";
            goto start;
    }

    return 0;
}
