//Calculate the roots of a quadratic equation using the discriminant.
#include <iostream>
#include <cmath>
using namespace std;

double discri(double a, double b, double c, double d) {
    double x1,x2;
    d=0;
    d=b*b - 4*a*c;
    cout<<d<<endl;
    if(d<0){
        cout<<"Unequal & Imaginary Functions Roots"<<endl;
        x1= -b + sqrt(d);
        x2= -b - sqrt(d);
        cout<<"Root1:"<< x1/2*a<<endl;
        cout<<"Root2:"<< x2/2*a;
        
    }
    else if(d==0){
        cout<<"Real & Equal Roots"<<endl;
        x1= -b + sqrt(d);
        x2= -b - sqrt(d);
        cout<<"Root1:"<< x1/2*a<<endl;
        cout<<"Root2:"<< x2/2*a;
    }
    else{
        cout<<"Real & UnEqual Roots"<<endl;
        x1= -b + sqrt(d);
        x2= -b - sqrt(d);
        cout<<"Root1:"<< x1/2*a<<endl;
        cout<<"Root2:"<< x2/2*a;
    }
    return 0;
}

int main(){
    double a,b,c,d;
    cout<<"Quadratic Equation: ax^2 + bx + c"<<endl;
    cout<<"Enter the Value of the a in the quadratic equation:"<<endl;
    cin>>a;
    cout<<"Enter the Value of the b in the quadratic equation:"<<endl;
    cin>>b;
    cout<<"Enter the Value of the c in the quadratic equation:"<<endl;
    cin>>c;
    discri(a,b,c,d);
}
