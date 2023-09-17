// Name: Aisha Malik
// Course: CSCI 135
// Instructor: Tong Yi
// Date: 09/08/2023
// Assignment: Project 1C

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num;
    char s;

    cin >> sum;
    while (cin >> s >> num) {
        if (s == '+'){
            sum += num;
        }
        else if (s == '-') {
            sum -= num;
        }
        else {
            cout << sum << endl;
            sum = num;
        }
    }

    cout << sum << endl;

    return 0;
}















