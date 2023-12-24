//Write a program that checks if a number is a perfect number.
#include<iostream>
using namespace std;

int main(){
    int n,a,sum=0;
    cout<<"Enter the Number:";
    cin>>n;
    for (int i=1; i<n;i++){
        a=n%i;
        if(a==0){
            sum += i;
        }
        }
    if(sum==n){
        cout<<"Perfect Number";
        }
    else{
        cout<<"Not a Perfect Number ";
    }
    return 0;}


