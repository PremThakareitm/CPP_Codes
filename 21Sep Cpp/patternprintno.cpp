#include<iostream>
using namespace std;
int main()
{
    int i,j,a;
    cout<<"\nEnter the value:";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cout<<"\n";
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
    }
    return 0;
}
