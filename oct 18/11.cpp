#include<iostream>
using namespace std;
int  main()
{
    int n = 1 ,i,sum=0,count=0;
    while(n!=0 )
    {
        cout<<"Enter a number"<<endl;
        cin>>n;
        sum=sum+n;
        count++;
    }
    int avg;
    avg=sum/(count-1);
    cout<<avg;
    return 0;
}