//Implement a program that prints the pattern of a right-angled triangle using nested loops.

#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the Number of Rows:";
    cin>>n;
    for (i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
    }
    cout<<"\n";
}
}