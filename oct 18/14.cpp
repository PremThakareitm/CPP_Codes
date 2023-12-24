#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter the nth number:"<<endl;
    cin>>n;
    do
    {
        int j = 2;
        int count = 0;
        while(j <= i/2)
        {
            if(i % j == 0)
            {
                count = 1;
            }
            j++;
        }

        if(count == 0)
        {
            cout << i << endl;
        }
        i++;
    }while(i<=n);
    return  0;
}