#include <iostream>
using namespace std;

int main() {
    int birthYear, currentYear, age;

    cout << "**************************" << endl;
    cout << "     AGE CALCULATOR      " << endl;
    cout << "**************************" << endl;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter the current year: ";
    cin >> currentYear;

    if (birthYear <= 0 || currentYear < birthYear) {
        cout << "Invalid year entered!" << endl;
    } 
    else {
        age = currentYear - birthYear;

        cout << "-------------------------" << endl;
        cout << "Your approximate age is: "
             << age << " years" << endl;
        cout << "-------------------------" << endl;
    }

    cout << "Thank you for using Age Calculator!" << endl;

    return 0;
}
