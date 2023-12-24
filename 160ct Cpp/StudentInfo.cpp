#include <iostream>
using namespace std;

class Student{
    public:
    string name,city,email;
    double roll,p,c,m,avg;
    void setDetails(){
        cout<<"Enter the Name:"<<endl;
        cin>>name;
        cout<<"Enter the Student Roll_no:"<<endl;
        cin>>roll;
        cout<<"Enter the City:"<<endl;
        cin>>city;
        cout<<"Enter the Email Id:"<<endl;
        cin>>email;
        cout<<"Enter the Physics, Chemistry and Maths:"<<endl;
        cin>>p>>c>>m;
        avg=(p+c+m)/3;
    }
    void setbatch(){
        if(avg>= 90 && avg<=100){
            cout<<"Eligible to take Admission in B.tech CSE";
        }
        else if(avg<90 && avg>=80){
            cout<<"Eligible to take Admission in B.E Chemical Engg.";
        }
        else if(avg<80 && avg<=60){
            cout<<"Eligible to take Admission in B.E Civil Engg.";
        }
        else if(avg<60){
            cout<<"Not Eligible to take Admission in College";
        }
        else{
            cout<<"Invalid Input";
        }
    }
};

// class Admission:public Student
// {
//     public:
//     string getInfo(){
//         return(name,city,email);
//     }
//     double getMarks(){
//         return(marks);
//     }
// };

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

