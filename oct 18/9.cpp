#include<iostream>
using namespace std;
int main()
{
    int n,first=0,second=1,next;
    cout<<"Enter the nth term"<<endl;
    cin>>n;
    int i=0;
    while(i<n)
    {
        if(i<=1)
        {
            next=i;
        }
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        i++;
        cout<<next<<" ";
    }
    cout<<endl;
    return 0;

}