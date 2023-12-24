//Implement a program that determines the grade of a student based on their marks of 5 subjects.

#include <iostream>
#include <string>
using namespace std;

string grades(double average) {
    if (average >= 90) {
        return "A+";
    } else if (average >= 80) {
        return "A";
    } else if (average >= 70) {
        return "B";
    } else if (average >= 60) {
        return "C";
    } else if (average >= 50) {
        return "D";
    } else {
        return "F";
    }
}

int main() {
    string name;
    int rollNo;
    double marks[5];

    cout << "Enter Student's Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks for 5 Subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    double total = 0;
    for (int i = 0; i < 5; i++) {
        total += marks[i];
    }
    double average = total / 5;

    string grade = grades(average);

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
