#include<iostream>
using namespace std;
int main()
{
    float s;
    cout<<"enter speed of train"<<endl;
    cin>>s;
    if(s>=120)
    {
        cout<<"die"<<endl;
        cout<<"reduce train speed to: "<<(s-30)<<endl;
    }
    else if(s>=80 && s<120)
    {
        cout<<"good speed"<<endl;
        cout<<"reduce train speed to : "<<(s-20)<<endl;
    }
    else if(s<80)
    {
        cout<<"okay."<<endl;
    }
    return 0;
}