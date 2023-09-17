// Name: Aisha Malik
// Course: CSCI 135
// Instructor: Tong Yi
// Date: 09/08/2023
// Assignment: Project 1B

#include <iostream>
using namespace std;

int main() {
    int result = 0;
    char op = '+';

    int num;
    while (cin >> num) {
        if (op == '+') {
            result += num;
        } else {
            result -= num;
        }

        if (!(cin >> op)) {
            break;
        }
    }

    cout << result << endl;

    return 0;
}



