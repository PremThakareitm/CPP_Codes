#include <iostream>
using namespace std;

int main() 
{
  int i = 0,n,sum=0;
  cout<<"enter nth number"<<endl;
  cin>>n;
  while (i<=n) 
  {
    sum=sum+i;
    i++;
    
  }
    cout << sum<<"\n";
  return 0;
}