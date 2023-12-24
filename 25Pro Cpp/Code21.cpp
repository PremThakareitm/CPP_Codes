//Write a program to find the majority element in an array (element appearing more than N/2 times).

#include <iostream>
using namespace std;

int main(){
    int n;
    float arr[n];
    cout<<"Enter the Size of Array:";
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"Enter the Element"<<i<<" of the Array:";
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i];
    }
    return 0;

}