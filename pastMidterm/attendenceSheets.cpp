/*SEPTEMBETR 18, 2023*/

/*Problem 1: write a function isLeap to find out whether a year is a leap year or not. 
A leap year is one that can be divided by 4 but not be 100, or a year that can be divided by 400. 
Problem 2: call function isLeap to find out all leap years from year 2000 to year 2500*/

#include <iostream>
using namespace std;

// Problem 1: Function to check if a year is a leap year
bool isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // Problem 2: Find and print leap years from 2000 to 2500
    cout << "Leap years from 2000 to 2500:" << endl;
    
    for (int year = 2000; year <= 2500; year++) {
        if (isLeap(year)) {
            cout << year << " ";
        }
    }

    return 0;
}


/*SEPTEMBER 21, 2023 */

/*Problem 1: Define a function writing a string with the following format around it.
Any string could be used.
For example, the string ”Hello” would produce:
-------
!Hello!
-------*/

#include <iostream>
using namespace std;

void wrap(string str);

int main() {
    cout << "Enter a string: ";
    string str;
    getline(cin, str);

    wrap(str);  // Wrap the user input string

    // Another call to the wrap function
    wrap("What a wonderful world");

    return 0;
}

void wrap(string str) {
    // First line with hyphens equal to the size of the string plus two.
    for (int i = 0; i < str.size() + 2; i++)
        cout << "-";
    cout << endl;

    // Wrap the input string with exclamation marks.
    cout << "!";
    for (int i = 0; i < str.size(); i++)
        cout << str[i];
    cout << "!";
    cout << endl;

    // Closing line with hyphens.
    for (int i = 0; i < str.size() + 2; i++)
        cout << "-";
    cout << endl;
}

/*Problem 2: Define a function circleArea, for a given radius r, return its area. The formula is πr2
. To use π in
C++, import cmath library, then use M_PI.*/

#include <iostream>
#include <cmath>

using namespace std;

double circleArea(double r) {
    return M_PI * r * r;
}

int main() {
    double radius;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = circleArea(radius);

    cout << "The area of the circle with radius " << radius << " is " << area << endl;

    return 0;
}


/*SEPTEMBER 28, 2023 */

/*Problem 1: Define a function for a given array of double and its size, calculate the average of
all its elements. */

#include <iostream>

using namespace std;

double calculateAverage(double arr[], int size) {
    if (size <= 0) {
        return 0.0;  // Return 0 if the array is empty or has a non-positive size
    }

    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size; // Calculate the average
}

/*In main function, write statements to define an array with values 1.1, 3.6, 7.9, and
call the above function to calculate its average. NO need to define the complete main
function. */

int main() {
    double arr[] = {1.1, 3.6, 7.9}; // Define an array with values
    int arraySize = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    double average = calculateAverage(arr, arraySize); // Call the function to calculate the average

    return 0;
}


/*OCTOBER 02, 2023 */

/*Define a function for a given array of int, its size, and a given integral factor, multiply
each element of the array by that factor.In main function, write statements to define an array with values 1, 2, 3, and call the
above function to triple each element in the array. NO need to define the complete
main function. */

#include <iostream>

using namespace std;

void multiplyByFactor(int arr[], int size, int factor) {
    for (int i = 0; i < size; i++) {
        arr[i] *= factor;
    }
}

int main() {
    int myArray[] = {1, 2, 3}; // Define an array with values
    int arraySize = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array

    int factor = 3; // The factor to multiply by

    multiplyByFactor(myArray, arraySize, factor); // Call the function to multiply each element

    return 0;
}


/*OCTOBER 05, 2023*/

/*Define a function to search for a target in an assorted array of integers. 
In the main function, write statements to define an array with values 1, 2, 3, 
and call the above function to find out whether 6 is in the array or not.*/

#include <iostream>
using namespace std;

bool searchArray(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true; // Found the target
        }
    }
    return false; // Target not found
}

int main() {
    int myArray[] = {1, 2, 3}; // Define an array with values
    int arraySize = sizeof(myArray) / sizeof(myArray[0]); // Calculate the size of the array

    int target = 6; // The number to search for

    bool found = searchArray(myArray, arraySize, target); // Call the function to search for the target

    if (found) {
        cout << target << " is in the array." << endl;
    } else {
        cout << target << " is not in the array." << endl;
    }
    return 0;
}

/*OCTOBER 12, 2023*/

/*Define a function, for a given integer array and a given index, 
if index is valid, that is, 0 <= index < size, where size is the number of 
elements in the array, remove element at this index, otherwise, do nothing. 
Return the size after possible deletion. 
 
Define a function, call the above function to remove redundant elements 
in a non-descending sorted integer array. Return the array's size.
 For example, given array {1, 2, 2, 2, 3, 3}, after deletion, 
 the array changes to {1, 2, 3}, and return 3, which is the size of 
 array after deletion. */

  #include <iostream>

using namespace std;

// Function to remove an element at the given index
int removeElementAt(int arr[], int& size, int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; // Reduce the size after removing the element
    }
    return size;
}

// Function to remove redundant elements from a non-descending sorted array
int removeRedundantElements(int arr[], int& size) {
    if (size <= 1) {
        return size; // No redundant elements to remove
    }

    int newSize = 1; // Initialize the new size with 1 (at least one element remains)

    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[newSize] = arr[i]; // Copy non-redundant element to a new position
            newSize++;
        }
    }

    size = newSize; // Update the original size
    return size;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call removeRedundantElements to remove redundant elements
    int newSize = removeRedundantElements(arr, size);

    cout << "Array after removal of redundant elements: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Size of the updated array: " << newSize << endl;

    return 0;
}
