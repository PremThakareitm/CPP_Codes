#include <iostream>
using namespace std;

int main(){
    double i;
    do{
        cout<<"Enter the Number:";
        cin>>i;
        cout<<"You Entered"<<i++<<"\n";
    }while(i!=0);
    return 0;
}
