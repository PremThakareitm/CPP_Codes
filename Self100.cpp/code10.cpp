//Implement a program to calculate the area of a triangle given its base and height.
#include <iostream>
using namespace std;

double triangle(double h,double b){
    double area;
    area=0.5*h*b;
    cout<<"\nArea of triangle:"<<area<<endl;
    return area;
}

int main(){
    double h,b;
    cout<<"Calculate the area of a Triangle";
    cout<<"\nEnter the Height of Triangle:";
    cin>>h;
    cout<<"Enter the Base of the Triangle:";
    cin>>b;
    triangle(h,b);
    return 0;

}