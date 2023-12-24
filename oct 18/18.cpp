#include<iostream>
using namespace std;

string rev(string b){
    string reve;
    for(int i=b.length()-1;i>=0;i--){
        reve+=b[i];
    }
    cout<<reve;
    return reve;
}
int main(){
    string b;
    cout<<"Enter the Name:";
    getline(cin,b);
    rev(b);
    return 0;
}

