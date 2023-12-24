// //2. Design a C++ program to manage student records. Create a class Student
// with attributes such as name, roll number, and marks. Implement methods
// for displaying student details, adding new students, and calculating the
// average marks of all students in the record system.

#include <iostream>
using namespace std;

class Student {
    private:
    int roll;
    string name;
    float marks;
    public:
    void setdata(){
        cout<<"Enter the Roll_no:";
        cin>>roll;
        cout<<"Enter the Name:";
        cin>>name;
        cout<<"Enter the Mark(Total 500):";
        cin>>marks;
    }
    void getdata(){
        cout<<"Roll_No:"<<roll<<"\n";
        cout<<"Name:"<<name<<"\n";
        cout<<"Percentage:"<<marks/5<<"%"<<"\n";
    }
};

int main(){
    int n,cho;
    cout<<"Enter the Number of students : ";
    cin>>n;
// ado:
    Student stud[n];

    for(int i = 0 ; i < n ; i++){
        stud[i].setdata();
    }
    for(int i = 0 ; i < n ; i++){
        stud[i].getdata();
    }
    // cout<<"Do you want to Add New Student:(1.Yes 2.No)";
    // cin>>cho;
    // if(cho==1){
    //     goto ado ;
    // }
    return 0;
}