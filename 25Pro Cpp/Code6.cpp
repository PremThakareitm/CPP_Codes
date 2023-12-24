//Create a program to calculate the power of a number using a loop.

#include <iostream>
using namespace std;

int  main(){
    int b,e,r=1;
    cout<<"Enter the Number:";
    cin>>b;
    cout<<"Enter the Power:";
    cin>>e;
    while(e!=0){
        r=b*r;
        e--;
    }
    cout<<r;
    return 0;
}