//WAP to compute area of the triangle and cirlce by overloding the area function.

#include <iostream>
using namespace std;
void area(double x,double y)
{
    cout<<"\nArea of the triangle is:"<<0.5*x*y<<endl;
}

void area(double z)
{
    cout<<"\nArea of the Circle is:"<<3.14*z*z<<endl;
}

int main(){
    double l,h,r;
    int c;
    cout<<"ENTER\n1.TO FIND AREA OF THE TRIANGLE\n2.TO FIND AREA OF THE CIRCLE\nChoice(1 or 2):";
    cin>>c;
    if(c==1){
    cout<<"\nLength of the triangle:";
    cin>>l;
    cout<<"Height of the triangle:";
    cin>>h;
    area(l,h);
    }
    else if(c==2){
    cout<<"\nRadius of the circle:";
    cin>>r;
    area(r);
    }
    return 0;
}