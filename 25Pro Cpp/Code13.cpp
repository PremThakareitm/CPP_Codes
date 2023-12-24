//Implement a program to find the GCD of two numbers using a for loop.

#include <iostream>
using namespace std;

int main(){
    int a,b,x=0;
    cout<<"Enter the Number 1:";
    cin>>a;
    cout<<"Enter the Number 2:";
    cin>>b;
    for(int i=1;i<=a;i++){
        x=a/i;
        
        cout<<x<<" ";
        if(x==1){
            break;
    }

    }
}