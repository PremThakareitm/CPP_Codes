#include <iostream>
using namespace std;

int main(){
    int i,n1=0,n2=1,n3,number;
    cout<<"Enter the Number:";
    cin>>number;
    for (i=0;i<number;i++){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    return 0;

    }
