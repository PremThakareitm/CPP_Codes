#include<iostream>
using namespace std;
int main()
{

    int num,i;
    cout<<"Enter the nth number"<<endl;
    cin>>num;
    for(int j = 1;j<=num;j++)
    {

        int count = 0;

        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                count++;
            
            }
        }
    if(count==0 )
        cout<< j<<endl;
    }

   
return 0;
}