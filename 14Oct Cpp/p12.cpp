#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(num<=1)
    {
        cout<<num<<" is not a prime number"<<endl;
        return 0;
    }
    for(i=2;i<num;i++)
    {
        if(num % i==0)
        {break;}   
    }
    if(i==num)
    {
        cout<<num<<" is Prime"<<endl;
    }
    else
    {
        cout<<num<<" is not prime"<<endl;
    }
    return 0;
}