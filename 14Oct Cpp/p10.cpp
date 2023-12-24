#include<iostream>
using namespace std;
int main()
{
    double amt,dis;
    cout<<"enter total bill amount"<<endl;
    cin>>amt;

    if(amt<10000)
    cout<<"No discount"<<endl;

    else if(amt == 10000 || amt<25000)
   {
    dis=amt*0.05;
    amt-=dis;
    cout<<"discount is 5%\n discount is: "<<amt<<endl;
   }
    
    else if(amt == 25000 && amt<50000)
   {
    dis=amt*0.14;
    amt-=dis;
    cout<<"discount is 14%\n discount is: "<<amt<<endl;
   }
    
    
    else if(amt == 50000 && amt<100000)
   { 
    dis=amt*0.16;
    amt-=dis;
    cout<<"discount is 16%\n discount is: "<<amt<<endl;
   }
   
    else if(amt >= 100000)
   {
    dis=amt*0.20;
    amt-=dis;
    cout<<"discount is 20%\n discount is: "<<amt<<endl;
   }
    return 0;



}