#include <iostream>
using namespace std;

int largest(int x, int y)
{
    if (x>y && y<x){
        cout<<"Number "<<x<<" is Greatest"<<endl;
    }
    else if(y>x && x<y){
        cout<<"Number "<<y<<" is Greatest"<<endl;
    }
    return 0;
}

int main(){
    int a,b;
    cout<<"Enter the Number:";
    cin>>a;
    cout<<"Enter the Number:";
    cin>>b;
    largest(a,b);
    return 0;
}