#include<iostream>
using namespace std;
int main()
{
    int first=0,second=1,next,n;
    cout<<"enter the sequence required:"<<endl;
    cin>>n;
    cout<<"fibonacci sequence upto"<<n<<"terms:"<<endl;
    for(int i =0;i<n;i++)
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
        cout<<next<<","<<endl;
    }
    return 0;
}