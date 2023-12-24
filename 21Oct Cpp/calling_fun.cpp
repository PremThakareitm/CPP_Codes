#include<iostream>
using namespace std;

int add(int n); //forward declaration
int main(){
    int num=2;
    cout<<"before calling: "<<num<<endl;
    cout<<"after calling: "<<add(num)<<endl;
}

int add(int num){
    num=num+10;
    return num;
}
