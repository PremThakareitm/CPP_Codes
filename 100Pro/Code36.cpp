//Implement a program that prints the pattern of a right-angled triangle using nested loops. 

#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "Enter the height of the right-angled triangle: ";
    cin >> height;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}