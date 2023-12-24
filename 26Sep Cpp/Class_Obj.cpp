#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string collegename;
    int rollno;
    double marks;
public:
    void setdata(string cn,int rn,double m)
    {
        collegename = cn;
        rollno = rn;
        marks = m;
    }

    void displaydata(){
        cout<<"Student Name: "<<collegename;
        cout<<"\nStudent Rollno: "<<rollno;
        cout<<"\nStudent Marks: "<<marks;
    }
};

int main()
{
    Student s1,s2,s3;
    s1.setdata("Prem",02,89);
    s1.displaydata();
}