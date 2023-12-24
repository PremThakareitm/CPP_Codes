#include <iostream>
using namespace std;

void add(int x,int y){
    cout<<"Addition"<<x+y;

}

int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"Enter the number:";
    cin>>b;
    add(a,b);
    return 0;  

}
