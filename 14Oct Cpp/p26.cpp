#include<iostream>
using namespace std;
int main()
{

    int num,counter=0;
    int count = 0;

    for(int i = 2;i<=10000;i++)
    {

        counter = 0;

        for(int j =2;j<=i/2;j++)
        {
            if(i % j==0)
            {
                counter++;
            }
        }
        if(counter==0 )
        {
            cout << i << endl;
            count++;
        }
    }

    cout << "Count is: " << count;
return 0;
}