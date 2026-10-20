
#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid units!";
    }
    else if (units <= 100) {
        bill = units * 3.0;
        cout << "Electricity Bill: Rs. " << bill;
    }
    else if (units <= 200) {
        bill = 100 * 3.0 + (units - 100) * 5.0;
        cout << "Electricity Bill: Rs. " << bill;
    }
    else {
        bill = 100 * 3.0 + 100 * 5.0
             + (units - 200) * 7.0;
        cout << "Electricity Bill: Rs. " << bill;
    }

    return 0;
}
