#include<iostream>
using namespace std;
bool prime(int num)
{
    int flag=0;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag++;
        }
    }
    if(flag==0)
    {return true;}
    else
    {return false;}
}
int main()
{
    int temp;
   bool prime_check;
   cout<<"Enter a number:"<<endl;
   cin>>temp;
   prime_check=prime(temp);
   if(prime_check)
   {
    cout<<"Its prime number."<<endl;
   }
   else
   {
    cout<<"Its not a prime number."<<endl;
   }


    return 0;
}
