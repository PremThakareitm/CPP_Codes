#include<iostream>
using namespace std;
int main()
{
    double a,b,choice;
    cout<<"\nSimple Calculator\n\n1)Addition\n2)subtraction\n3)Multiplication\n4)Division\n"<<endl;
    cout<<"Enter choice"<<endl;
    cin>>choice;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    
    if(choice==1)
    cout<<a+b<<endl; 
    else if(choice==2)
    cout<<a-b<<endl;
    else if(choice==3)
    cout<<a*b<<endl;
    else if(choice==4)
    cout<<a/b<<endl;
    else
    cout<<"Error"<<endl;
    return 0;
}