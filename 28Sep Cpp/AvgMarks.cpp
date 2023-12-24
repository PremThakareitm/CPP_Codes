// A batch of 10 students enrolled for specialized course in Computer Engineering
// department. The reputed IT industry announced its placement drive. The eligibility criteria
// for placement are the average of five semesters marks should be greater than equal to 70%
// and at least 60% marks in each semester. Display all the eligible students and their average
// marks. Also display students who are not eligible. Note: Marks should be between 1 to 100

#include <iostream>
using namespace std;

double Avgg(double x, double y, double z, double w, double h){
    if (x>=60.0 && y>=60.0 && z>=60.0 && w>=60.0 && h>=60.0){
        double add= x+y+z+w+h;
        double avg=add/5.0;
        cout<<"Average:"<<avg<<endl;
        if (avg>=70.0){
            cout<<"Congratulation Your Eligible"<<endl;
        }
        else if (avg<=70.0){
            cout<<"Sry,Your Not Eligible"<<endl;
        } 
    return avg;
    }

    else{
        cout<<"Subject Requirement not satisfied"<<endl;
}
    return 0;
}


int main(){
    double a,b,c,d,e;
    int i,n;
    cout<<"Number of Students:";
    cin>>n;
    for(i=0; i < n; i++){
    cout<<"\nEnter your Sub1 Marks"<<endl;
    cin>>a;
    cout<<"Enter your Sub2 Marks"<<endl;
    cin>>b;
    cout<<"Enter your Sub3 Marks"<<endl;
    cin>>c;
    cout<<"Enter your Sub4 Marks"<<endl;
    cin>>d;
    cout<<"Enter your Sub5 Marks"<<endl;
    cin>>e;
    Avgg(a,b,c,d,e);
    }
    
    return 0;
}