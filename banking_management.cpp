#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount(string accountHolder, int accNo, double initialBalance) {
        name = accountHolder;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Amount must be greater than zero.\n";
            return;
        }

        balance += amount;
        cout << "Deposit successful!\n";
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Amount must be greater than zero.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        }
    }

    void displayDetails() const {
        cout << "\n----- ACCOUNT DETAILS -----\n";
        cout << "Account holder: " << name << '\n';
        cout << "Account number: " << accountNumber << '\n';
        cout << "Current balance: Rs. "
             << fixed << setprecision(2) << balance << '\n';
    }
};

int main() {
    string name;
    int accountNumber;
    double initialBalance;
    int choice;
    double amount;

    cout << "===== BANKING MANAGEMENT SYSTEM =====\n";
    cout << "Enter account holder name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter initial balance (Rs.): ";
    cin >> initialBalance;

    if (initialBalance < 0) {
        cout << "Initial balance cannot be negative.\n";
        return 1;
    }

    BankAccount account(name, accountNumber, initialBalance);

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Deposit money\n";
        cout << "2. Withdraw money\n";
        cout << "3. View account details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter deposit amount (Rs.): ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter withdrawal amount (Rs.): ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.displayDetails();
                break;

            case 4:
                cout << "Thank you for using the Banking Management System!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
