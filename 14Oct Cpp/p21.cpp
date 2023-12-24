#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the Range till Nth:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0 || i%5==0){
        sum+=i;  
        }
    }
    cout<<"Sum of numbers divisible by 3 or 5 till "<<n<<"th number is: "<<sum<<endl;
    return 0;
}