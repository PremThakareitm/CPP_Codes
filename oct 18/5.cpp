#include<iostream>
using namespace std;
int main()
{
    int password;
    cout<<"Enter password"<<endl;
    cin>>password;
    while(password!=1234)
    {
        cout<<"OOPS! Try again:("<<endl;
        cin>>password;
    }
    cout<<"Correct password."<<endl;
    return 0;
}