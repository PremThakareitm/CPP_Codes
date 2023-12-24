#include <iostream>
using namespace std;

int main(){
    double s;
    cout<<"Enter the Speed in KMPH:";
    cin>>s;
    if(s==0){
        cout<<"Start The Airplane";
    }
    else if(s<=500 && s>0){
        cout<<"Slow Speed";
    }
    else if(s>500 && s<=1000){
        cout<<"Moderate Speed";
    }
    else if(s>1000 && s<=1500){
        cout<<"Fast Speed";
    }
    else if(s>1500){
        cout<<"Supersonic Speed";
    }
    else{
        cout<<"Invalid Speed";
    }

    return 0;
}