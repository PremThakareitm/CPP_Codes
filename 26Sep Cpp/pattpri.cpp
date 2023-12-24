#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the number of Rows:";
    cin>>n;
    for (i=0; i<=n; i++){
        for(j=n; j>=i; j--){
            cout<<"*";
    }
    cout<<"\n";
}
    return 0;
}