#include <iostream>
using namespace std;
int main() {
    string books[5] = {
        "Harry Potter",
        "The Alchemist",
        "Atomic Habits",
        "Wings of Fire",
        "The Hobbit"
    };

    string searchBook;
    bool found = false;

    cout << "===== Library Book Checker =====" << endl;

    cout << "\nAvailable Books:\n";

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << books[i] << endl;
    }

    cout << "\nEnter book name to search: ";
    getline(cin, searchBook);

    for (int i = 0; i < 5; i++) {
        if (books[i] == searchBook) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "\nBook is available in the library!";
    }
    else {
        cout << "\nSorry, book is not available.";
    }

    return 0;
}
