#include <iostream>
using namespace std;

int main(){
    int marks;
    int arr[4]={};
    for (int i=0;i<4;i++){
    cout<<"Enter the Marks of Roll No"<<i+1<<":";
    cin>>marks;
    arr[i]=marks;
    }
    for (int i=0; i<4;i++){
        cout<<"Marks of Roll No"<<i+1;
        cout<<":"<<endl<<arr[i]<<endl;
    }
}