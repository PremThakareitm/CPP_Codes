//Implement a program to check if a given number is prime or not.

#include <iostream>
using namespace std;

int main(){
    int n,a=0;
    cout<<"Enter the Number:";
    cin>>n;
    for (int i=1; i<=n; i++){
        if(n%i==0){
            a=a+1;
        }
    }
    if(a>2){
        cout<<n<<" is Not Prime";
    }
    else{
        cout<<n<<" is Prime";
    }
    return 0;
}