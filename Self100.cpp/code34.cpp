//Calculate the sum of digits of a number using a do-while loop.

#include <iostream>
using namespace std;

int main(){
    int n,a,b,sum=0;
    cout<<"Enter the Number:";
    cin>>n;
    do{
        a=n%10;
        n=n/10;
        sum+=a;
    }while(n!=0);
    cout<<sum;



}