#include<iostream>
using namespace std;

void rev(string str){
    int n,a=0;
    n=str.length();
    for(int i=0;i<n/2;i++){
        if(str[i]==str[n-(i+1)]){
            a++;
        }
    }
    if(a==n/2){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}
int main(){
    string str;
    cout<<"Enter the String:";
    getline(cin,str);
    rev(str);
    return 0;
}

