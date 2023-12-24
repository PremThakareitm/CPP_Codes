#include<iostream>
using namespace std;
int main()
{
    double num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if(num<0)
    cout<<num<<" is a negative number"<<endl;
    else if(num==0)
    cout<<"Entered number is 0"<<endl;
    else if(num>0)
    cout<<num<<" is a positive number"<<endl;
    return 0;
}