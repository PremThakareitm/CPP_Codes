#include<iostream>
using namespace std;
int fact(int n)
{
if(n<=1)
{
    return 1;
}
else
{
    return n*fact(n-1);
}
}
int main()
{
    int num,result;
    cout<<"Enter positive integer"<<endl;
    cin>>num;
    if(num<0)
    cout<<"invalid input"<<endl;
    else
    {
    result=fact(num);
    cout<<"Factorial of "<<num<<" is "<<result<<endl;
    }
    return 0;
}