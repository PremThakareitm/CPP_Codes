// // Write a C++ Program to find the largest number among three numbers (using if else ladder)
// // Write a program to read the class object of Student such as Rollno,Name,Class, Division and Marks.
// Create functions inside class to take input from the keyboard using getStudentData() and DisplayStudentData() for displaying the student details on the screen.

#include <iostream>
using namespace std;

class student {
private:
    char name[50];
    int roll;
    int total;
    float per;
    int classs;
    char div;


public:
    //member function to get student's details
    void getStudentData(void);
    //member function to print student's details
    void DisplayStudentData(void);
};

//member function definition, outside of the class
void student::getStudentData(void)
{
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> roll;
    cout << "Enter Class:";
    cin >> classs;
    cout << "Enter division:";
    cin >> div; 
    cout << "Enter total marks outof 500: ";
    cin >> total;

    per = (float)total / 500 * 100;
}


void student::DisplayStudentData(void)
{
    cout << "Student details:\n";
    cout << "\nName: " << name;
    cout<< "\nRoll Number: " << rollNo;
    cout<< "\nClass: " << classs ;
    cout<< "\nDivision: " << division;
    cout<< "\nTotal: " << total;
    cout<< "\nPercentage: " << perc;
}

int main()
{
    student std; //object creation

    std.getStudentData();
    std.DisplayStudentData();

    return 0;
}