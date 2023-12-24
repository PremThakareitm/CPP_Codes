#include <iostream>

using namespace std;

int main(){

    int n , power = 0 , armstrong_num = 0 , digit , a , b , c = 1;

    cout<<"Enter a num  : ";
    cin>>n;

    a = n;
    b = n;
    while(a>0){
        a /= 10;
        power++;
    }

    while(b>0){
        digit = b%10;
        c = 1;
        for(int i = 0 ; i < power ; i++){
            c *= digit; 
        }
        armstrong_num += c;
        b /= 10;
    }

    if(armstrong_num == n){
        cout<<"It is armstrong num";
    }

    return 0;
}