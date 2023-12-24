#include<iostream>
using namespace std;
int main()
{
    double a,b,c,d,e,x,y,z,ans;
    cout<<"given equation is a+b+c+(d/e)*(1/x)*(1/y)*(1/z)"<<endl;
    cout<<"enter value of a: "<<endl;
    cin>>a;
    cout<<"enter value of b: "<<endl;
    cin>>b;
    cout<<"enter value of c: "<<endl;
    cin>>c;
    cout<<"enter value of d: "<<endl;
    cin>>d;
    cout<<"enter value of e: "<<endl;
    cin>>e;
    cout<<"enter value of x: "<<endl;
    cin>>x;
    cout<<"enter value of y: "<<endl;
    cin>>y;
    cout<<"enter value of z: "<<endl;
    cin>>z;
    // if(e==0 || x==0 || y==0 || z==0)
    // cout<<"error"<<endl;

    ans=0;
    ans=a+b+c+d/e*1/x*1/y*1/z;
    cout<<"solution = "<<ans<<endl;
    return 0;
}