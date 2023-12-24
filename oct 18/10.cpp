#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(n<=1)
    {
        cout<<"Not a prime number."<<endl;
    }
    while(i<=n)
    {
        if(n%i==0)
        {break;}
        
        i++;
    }
    if(i==n)
        {
            cout<<n<<" is a prime number."<<endl;
        }
        else
        {
            cout<<n<<" is not a prime number."<<endl;
        }
    return 0;
}
