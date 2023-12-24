#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter the three sides of the triangle:"<<endl;
    cin>>a>>b>>c;
    if(a==b && b==c)
    cout<<"It is an equilateral triangle"<<endl;
    else if(a==b || a==c || b==c )
    {
        cout<<"Isosceles triangle";
    }
    else 
    cout<<"Scalene triangle"<<endl;
    return 0;
}