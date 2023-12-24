#include <iostream>
using namespace std;

int add(int x,int y=5)
{
    int z=x+y;
    return z;
}

int main()
{
    int a,b,sum;
    cout << "\nEnter the number: ";
    cin>>a;
    // cout << "\nEnter second number: ";
    // cin >> b;
    sum=add(a);
    cout<<"\nadd:"<<sum<<endl;
    return 0;
}