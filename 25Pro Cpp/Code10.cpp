//Implement a program that finds the largest among three numbers using nested if-else statements.

#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    cout<<"Enter Any Three Numbers:"<<endl;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<a<<" is greater"<<endl;
            if(a==b && b>c || a==c && c>b){
                cout<<a<<" is Greater at two places";
                }
    }
    else if(b>=a && b>=c){
        cout<<b<<" is greater"<<endl;

            if(b==c  && c>a){
                cout<<b<<" is Greater at two places";
            }
    }
    else if(c>=a && c>=b){
        cout<<c<<" is greater"<<endl;
    }
    return 0;
}