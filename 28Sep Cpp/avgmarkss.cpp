#include <iostream>
using namespace std;

struct Student {
    string name;
    double marks[5];
};

double CalculateAverage(double marks[5]) {
    double total = 0;
    for (int i = 0; i < 5; i++) {
        if (marks[i] < 60.0) {
            return -1.0; // Student is not eligible if any semester has less than 60% marks.
        }
        total += marks[i];
    }
    return total / 5.0;
}

int main() {
    int n;
    cout << "Number of Students: ";
    cin >> n;

    Student students[n]; // Create an array of 'n' students

    for (int i = 0; i < n; i++) {
        cout << "Enter Student Name: ";
        cin >> students[i].name;

        for (int j = 0; j < 5; j++) {
            cout << "Enter Sub" << j + 1 << " Marks: ";
            cin >> students[i].marks[j];
        }
    }

    cout << "\nEligibility Status:\n";

    for (int i = 0; i < n; i++) {
        double average = CalculateAverage(students[i].marks);

        if (average >= 70.0) {
            cout << students[i].name << " is eligible with an average of " << average << "%" << endl;
        } else {
            cout << students[i].name << " is not eligible." << endl;
        }
    }

    return 0;
}
