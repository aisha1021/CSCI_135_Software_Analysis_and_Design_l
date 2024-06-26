/*
Name: Aisha Malik
Course: CSCI 135
Instructor: Tong Yi
Assignment: Lab 4B

Write a program checkerboard.cpp that asks the user to input width and height and prints a rectangular 
checkerboard of the requested size using asterisks and spaces (alternating).

Example:
Input width: 11
Input height: 6

Shape:
* * * * * *
 * * * * * 
* * * * * *
 * * * * *
* * * * * *
 * * * * *
Hint:
You used nested loops in the previous task that looked probably like

for (int row = 0; row < height; row++) {
    for (int col = 0; col < width; col++) {

        ...
    
    }
}
Inside the loops, you can add an if statement that will be conditionally printing 
asterisk * or (space) depending on the coordinates row and col.
*/

#include <iostream>
using namespace std;

int main() {
    int width, height;

    // Asks the user to input a width and height
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;

    cout << "\nShape: " << endl;
    
    // Runs col for-loop for every value of row for-loop 
    for(int row = 0; row < height; row++) {
        for(int col = 0; col < width; col++) {
            if(row % 2 == 0) { // space if remainder is not 0
                if(col % 2 == 0) { // if the column is even 
                    cout << "*";
                } else {
                    cout << " "; // Repeats until inputs are done
                }
            } else if(row % 2 != 0) { // condition to add a space in every other row for col
                if(col % 2 == 0) {
                    cout << " ";
                } else {
                    cout << "*";
                }
            }
        }

        cout << endl;
    }

    return 0;
}