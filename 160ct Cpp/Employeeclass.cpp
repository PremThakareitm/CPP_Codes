#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    double empno,basic,da,netsalary;
    void setDetails(){
        cout<<"Enter the Name of Employee:"<<endl;
        cin>>name;
        cout<<"Enter the Employee ID:"<<endl;
        cin>>empno;
        cout<<"Enter the Salary:"<<endl;
        cin>>basic;
        cout<<"Enter the DA in Percentage:"<<endl;
        cin>>da;
        netsalary=basic + (da/100);

    }


int main(){
    int n;
    double roll;
    cout<<"Enter the Number of Students:"<<endl;
    cin>>n;
    Student Stu[n];
    for(int i=0;i<n;i++){
    cout<<"Enter the Details"<<endl;
    Stu[i].setDetails();
    }
    cout<<"Enter the Roll_No:"<<endl;
    cin>>roll;

    for(int i=0;i<n;i++){
    if(roll==Stu[i].roll){
        Stu[i].setbatch();
    }
    }
    return 0;
}

