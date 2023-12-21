/*
Name: Aisha Malik
Course: CSCI 135
Instructor: Tong Yi
Assignment: Lab Quiz 10

Format Date

Define a function, formatDate, that returns the formatted date string given a pointer
to a Date object:

string formatDate(Date *d);

You may use the function to_string() to convert an integer to a string. Make sure
Date is defined in your program
*/

#include <iostream>
using namespace std;

class Date {
public:
    int month;
    int day;
    int year;
};

void printDate(Date *input) {
    cout << input->month << "/" << input->day << "/" << input->year;
}

int main() {
    Date d = {10, 21, 2023};
    printDate(&d);
    cout << endl;
    return 0;
}
