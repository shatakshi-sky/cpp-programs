#include <iostream>
using namespace std;

int main() {
    int pin = 1234;
    int enteredPin;
    int choice;
    double balance = 5000;
    double amount;

    cout << "===== MINI ATM =====" << endl;

    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin) {

        do {
            cout << "\n1. Check Balance";
            cout << "\n2. Deposit Money";
            cout << "\n3. Withdraw Money";
            cout << "\n4. Exit";

            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {

                case 1:
                    cout << "Your Balance: Rs. " << balance << endl;
                    break;

                case 2:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;

                    if (amount > 0) {
                        balance += amount;
                        cout << "Money deposited successfully!" << endl;
                    } else {
                        cout << "Invalid amount!" << endl;
                    }
                    break;

                case 3:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;

                    if (amount > 0 && amount <= balance) {
                        balance -= amount;
                        cout << "Please collect your money." << endl;
                    } else {
                        cout << "Invalid amount or insufficient balance!" << endl;
                    }
                    break;

                case 4:
                    cout << "Thank you for using Mini ATM!" << endl;
                    break;

                default:
                    cout << "Invalid choice!" << endl;
            }

        } while (choice != 4);

    } else {
        cout << "Incorrect PIN!" << endl;
    }

    return 0;
}
