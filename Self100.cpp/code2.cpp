//Implement a program to check if a given number is prime or not.

#include <iostream>
using namespace std;

int main(){
    int i,n,x=0;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i == 0){
        x=x+1;}
    }
    if(x==2){
        cout<<"prime number";
        }
    else{
        cout<<"NOT Prime number";
        }

}
