#include<iostream>
using namespace std;

int main()
{
    int range, nos=0, count=0;
    // cout<<"Enter range to print";
    // cin>>range;

    for(int i=2;i<=10000;i++)
    {
        count=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if (count==0)
        {
            cout<<i<<" ";
            nos++;
        }
    }
    cout<<endl<<"The number of Primes are: "<<nos;
    return 0;
}