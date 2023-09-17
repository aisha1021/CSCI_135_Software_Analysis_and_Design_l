// Name: Aisha Malik
// Course: CSCI 135
// Instructor: Tong Yi
// Date: 09/08/2023
// Assignment: Project 1D

#include <iostream>

using namespace std; // Add using namespace std; here

int get_number() {
    // read the number
    int number;
    cin >> number;

    // read the next character
    char next_char;
    cin.get(next_char);

    // if the next character is ^, square the number
    if (next_char == '^') number = number * number;

    // otherwise, don't consume next_char: put it back
    else cin.putback(next_char);

    return number;
}

bool evaluate_expression() // return true if an expression was evaluated
{
    int result = get_number(); // initial result is the first number

    char oper;
    while (cin >> oper && oper != ';') // till a ; is encountered
    {
        const int operand = get_number(); // read in the operand

        switch (oper) {
            case '+': result += operand; break;
            case '-': result -= operand; break;
            case '*': result *= operand; break;
            // etc.
        }
    }

    // if an expression was read, print the result
    if (cin) cout << result << '\n';

    return cin.good(); // return true if expression input was successful
}

int main() {
    // keep evaluating expressions one by one
    // till there is no more input that can be read
    do cout << "enter expression: ";
    while (evaluate_expression());
}
