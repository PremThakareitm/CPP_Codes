#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number to be Multiply:";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        int j=i*n;
        cout<<n<<" * "<<i<<" = "<<j<<endl;
    }
    return 0;
}