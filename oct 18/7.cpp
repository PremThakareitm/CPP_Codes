#include<iostream>
using namespace std;
int main()
{
    int n,i=0,j=0;
    float arr[10];
    cout<<"Enter array size(upto 10):"<<endl;
    cin>>n;
    while(i<n)
    {
        cout<<"Enter no "<<i+1<<":"<<endl;
        cin>>arr[i];
        i++;
        
    }
    while(j<n)
    {
        if(arr[0]<arr[j])
        {
            arr[0]=arr[j];
        }
        j++;
    }
    cout<<"Largest element is:"<<arr[0]<<endl;
    return 0;

}