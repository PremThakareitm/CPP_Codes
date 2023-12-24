#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,avg;
    cout<<"Enter the Size of Array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" Element:"<<endl;
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"sum of array elements is: "<<sum<<endl;
    avg=sum/n;
    cout<<"average of array elements is: "<<avg;
    return 0;
}