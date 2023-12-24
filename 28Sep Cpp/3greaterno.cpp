#include <iostream>
using namespace std;

double grt(double x, double y,double z) {
    if (x>y && x>z){
        cout <<x<<" Greater";
        }
    else if (y>x && y>z){
        cout <<y<<" Greater";
        }
    else if (z>x && z>y){
        cout <<z<<" Greater";
    } 
    return 0.0;
}

int main(){
    double a,b,c;
    cout<<"Enter First Numbers:"<<endl;
    cin>>a;
    cout<<"Enter Second Numbers:"<<endl;
    cin>>b;
    cout<<"Enter Third Numbers:"<<endl;
    cin>>c;
    grt(a,b,c);
    return 0;

}