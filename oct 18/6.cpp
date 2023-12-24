#include<iostream>
using namespace std;
int main()
{
    int n,i=1,fact=1;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    return 0;
}