//WAP a cpp program to display relation btw 2 variable by multiple return statemaents.

#include <iostream>
using namespace std;

void relationship(double x,double y){
    if (x>y && y<x){
    cout<<x<<" Is Greater than"<<y;
    return 1;
    }
    if (x==y){
    cout<<"Both the Numbers are Equal";
    return 0;
    }
    else if(y>x && x<y){
    cout<<y<<" Is Greater than"<<x;
    return -1;
    }
}

int main(){
    double a,b;
    cout<<"Enter the First Number:";
    cin>>a;
    cout<<"Enter the Second Number:";
    cin>>b;
    relationship(a,b);
    return 0;

}