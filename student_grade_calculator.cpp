#include <iostream>
using namespace std;

int main() {
    float marks1, marks2, marks3;
    float average;

    cout << "Enter marks for Subject 1: ";
    cin >> marks1;

    cout << "Enter marks for Subject 2: ";
    cin >> marks2;

    cout << "Enter marks for Subject 3: ";
    cin >> marks3;

    average = (marks1 + marks2 + marks3) / 3;

    cout << "\nAverage Marks = " << average << endl;

    if (average >= 90) {
        cout << "Grade = A+" << endl;
    }
    else if (average >= 80) {
        cout << "Grade = A" << endl;
    }
    else if (average >= 70) {
        cout << "Grade = B" << endl;
    }
    else if (average >= 60) {
        cout << "Grade = C" << endl;
    }
    else if (average >= 50) {
        cout << "Grade = D" << endl;
    }
    else {
        cout << "Grade = F" << endl;
    }

    return 0;
}
