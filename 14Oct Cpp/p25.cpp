#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for( i=1;i<=100;i++)
    {
    for(j=2;j<=i/2;j++)  
      if(i%j==0)
      {
        cout<<j;
      }  
    }
    return 0;
}