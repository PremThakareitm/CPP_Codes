//Write a C++ program to check if a number is prime or composite.

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
        cout<<n<<" is Composite";
    }
    else if(a==2){
        cout<<n<<" is Prime";
    }
    else{
        cout<<n<<" is neither prime or composite";
    }
    return 0;
}