#include <iostream>
using namespace std;

void leap(int y)
{
    if((y%4==0 && y%100!=0)||(y%400==0 ))
    {
        cout<<y<<" is a leap year."<<endl;
    }
    else
    {
        cout<<y<<" isn't a leap yeaer."<<endl;
    }
}


int main()
{
    int year;
    cout<<"Enter year:"<<endl;
    cin>>year;
    leap(year);
    return 0;

}