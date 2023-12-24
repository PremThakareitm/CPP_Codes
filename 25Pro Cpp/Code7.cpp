//Create a program to check if a given string is a palindrome.

#include <iostream>
using namespace std;

int main(){
    string str;
    int n,a=0;
    cout<<"Enter the String:";
    cin>>str;
    n=str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]==str[n-(i+1)]){
            a++;
        }
    }
    if(a==n/2){
        cout<<"p";
    }
    else{
        cout<<"np";
    }
}