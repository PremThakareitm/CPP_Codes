#include<iostream>
using namespace std;
void power(int b, int e)
{
    int r=1,d=e;
    while(e!=0)
    {
        r=b*r;
        e--;
    }
    cout<<b<<" raise to "<<d<<" is "<<r<<endl;
}
int main()
{
    int a,c;
    cout<<"Enter base:"<<endl;
    cin>>a;
    cout<<"Enter exponent:"<<endl;
    cin>>c;
    power(a,c);
    return 0;

}