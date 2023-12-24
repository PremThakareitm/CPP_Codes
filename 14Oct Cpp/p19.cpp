#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the nth number"<<endl;
    cin>>n;
    for(int i=2;i<=n;i+=2)
    {
        if(n%2==0)
        sum+=i;
    }
    cout<<"sum of even numbers from 1 to "<<n<<" is "<<sum<<endl;
}