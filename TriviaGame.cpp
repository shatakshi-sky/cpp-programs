#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "============================\n";
    cout << "       NUMBER MASTER\n";
    cout << "============================\n";

    cout << "\n1. What is the square of 7?\n";
    cout << "1. 42\n2. 49\n3. 56\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 49.\n";
    }

    cout << "\n2. What is 15 * 3?\n";
    cout << "1. 30\n2. 45\n3. 60\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 45.\n";
    }

    cout << "\n3. What is the cube of 3?\n";
    cout << "1. 9\n2. 18\n3. 27\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 3) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is 27.\n";
    }

    cout << "\n============================\n";
    cout << "Final Score: " << score << "/3\n";

    if (score == 3)
        cout << "Excellent! Perfect Score!";
    else if (score >= 1)
        cout << "Good job! Keep practicing!";
    else
        cout << "Better luck next time!";

    cout << "\n============================\n";

    return 0;
}
