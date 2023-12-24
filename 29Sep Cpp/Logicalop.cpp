#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Number:";
    cin>>a;
    if (a>=18 && a<60){
        cout<<"Your Adult";
    }
    else if (a>=0 && a<18){
        cout<<"Go to School Bro";
    }
    else{
        cout<<"Your Senior Citizen";
    }
    return 0;

    }