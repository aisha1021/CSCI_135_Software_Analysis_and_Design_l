#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

/* 09/28

1. Define a function for a given array of double and its size, calculate the average of
all its elements. */


double arrAvg(int* arr, int size){

    double sum = 0.0;
    for(int i = 0; i < size - 1; i++){
        sum += arr[i];
    }

    double average = sum / size;

    return average;
}

int main(){
    int arr[] = {1.1, 3.6, 7.9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int value = arrAvg(arr, size);

    cout << value << endl;

    return 0;
}

/* 10/02

1. Define a function for a given array of int, its size, and a given integral factor, multiply
each element of the array by that factor. */

void scalar(int* arr, int size, int factor) {
    for (int i = 0; i < size; i++) {
        arr[i] *= factor;
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int factor = 3;

    scalar(arr, size, factor);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



/* 10/05

1. Define a function to search for a target in an assorted array of integers. If the target is found.
return the index of the first occurance, otherwise return -1. */

int findTarget(int* arr, int size, int target){
    for(int i = 0; i < size - 1; i++){
        if(target == arr[i]){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 6;

    int result = findTarget(arr, size, target);

    cout << result << endl;

    return 0;
}


/* 10/10 

1. Define a function, for a given array of integers, if its size is even, then swap the first
half with the second half; otherwise, do nothing.
Suppose an array is 1, 6, 7, 3 after calling this function on the array, the array is
changed to 7, 3, 1, 6.
As another example, if the array is 1, 3, 2, then the array is not changed since the size
of the array is odd. */

#include <iostream>

using namespace std;

void swapHalvesIfEven(int arr[], int size) {
    if (size % 2 == 0) {
        int halfSize = size / 2;

        for (int i = 0; i < halfSize; i++) {
            int temp = arr[i];
            arr[i] = arr[i + halfSize];
            arr[i + halfSize] = temp;
        }
    }
}

int main() {
    int arr1[] = {1, 6, 7, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    swapHalvesIfEven(arr1, size1);
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}

/* 10/12

1. Define a function, for a given integer array and a given index, if index is valid, that
is, 0 <= index < size, where size is the number of elements in the array, remove element
at this index, otherwise, do nothing. Return the size after possible deletion. */

int validIndex(int* arr, int& size, int index) {
    if (0 <= index && index < size) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        
        size--;

        return size;
    } else {
        return size;
    }
}

/* 2. Define a function, call the above function to remove redundant elements in a nondescending sorted integer array. Return the array's size. For example, given array {1,
2, 2, 2, 3, 3}, after deletion, the array changes to {1, 2, 3}, and return 3, which is the
size of array after deletion. */

int removeRedundantElements(int* arr, int& size) {
    int newSize = size;

    for (int i = 0; i < newSize - 1; i++) {
        while (i < newSize - 1 && arr[i] == arr[i + 1]) {
            validIndex(arr, newSize, i + 1);
        }
    }

    return newSize;
}

/* 10/19

1. Define a class, with data member value as an int, with the following three operations:
• method to set data member value to be zero.
• count method to increase the current data member value by 1.
• get_v4uemethod return the current value of data member value. 

*/

/* 10/30 

1. Define a function, given a two-dimensional array and a row index, calculate
sum of that row. */

const int num_col = 3;

int sumOfRow(int array[][num_col], int rowIdx, int num_col) {
    int sum = 0;

    for (int col = 0; col < num_col; col++) {
        sum += array[rowIdx][col];
    }

    return sum;
}

/* 2. Define a function, given a two-dimensional array and a column index, calculate
sum of that column. */

const int num_row = 3;

int sumOfCol(int array[num_row][], int colIdx, int num_row) {
    int sum = 0;

    for (int row = 0; row < num_row; row++) {
        sum += array[row][colIdx];
    }

    return sum;
}


/* 10/26 

1. Declare and initialize a two-dimensional string array called arr with two rows.
The first row is "big", "medium", "small", the second row is "smile", "giggle", "laugh". */

string arr[2][3] = {{"big", "medium", "small"}, {"smile" "giggle", "laugh"}};


/* 11/02

1. Define a two-dimensional array with 5 rows, the n-th row has n columns,
where 1 <= n <= 5. The data of the array is as follows. Define and initialize the array, then
print the array out as follows.

0
1 2
3 4 5
6 7 8 9
10 11 12 13 14 */


void printArray(int array[][5], int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int numRows = 5;
    int myArray[numRows][5];

    int counter = 0;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            myArray[i][j] = counter++;
        }
    }

    printArray(myArray, numRows);

    return 0;
}


/* 11/06

1. Define member function add_item of class CashRegister, which has data
members item_count (an int) and total_price (a double type).
In the above method, input parameter is price, representing the price of an item to be
added. After a cash register adds that item, item_count is increased by 1 and total_price
is increased by price. */

class CashRegister {
private:
    int item_count;
    double total_price;
public:
    CashRegister(){
        item_count = 0;
        total_price = 0.0;
    }

    void add_item(double price){
        item_count++;
        total_price += price;
    }
};


/* 11/09 Long Page One */

/* 11/13

1. Define a class Triangle. Each Triangle has three edges, let us call it a, b, c,
where the size of any two edges is larger than the third one. For simplicity, assume the edges
are integers.
(1) Declare class Triangle with data members and a constructor with three integer parameters.
(2) Define a constructor to take three parameters, if the given parameters are all positive
and sum,
of any two parameter is larger than the third one, then use them to initialize
the orresponding dinethbers, oti wise, set a, b, c to 1. */

class Triangle {
private:
    int a;
    int b;
    int c;
public:
    Triangle(int a, int b, int c);
};

Triangle::Triangle(int a, int b, int c){
    if((a > 0 && b > 0 && c > 0) && ((a + b > c) || (a + c > b) || (b + c > a))){
        this->a = a;
        this->b = b;
        this->c = c;
    } else {
        this->a = 1;
        this->b = 1;
        this->c = 1;
    }

}


/* 11/16

1. Define a function, for a vector of ints, find all elements that are not zeros,
and put them in a vector of ints, return that vector. Do not change the relative order of the
elements in the original vector.
For example, given a vector of ints with values 1, 0, 0, 1, 0, 2, the return is a vector of
ints with values 1, 1, 2. */

vector<int> removeZeros(vector<int> num){
    vector<int> temp;

    for(int i = 0; i < num.size(); i++){
        if(num[i] != 0){
            temp.push_back(num[i]);
        }
    }

    return temp;
}

/* 1. Define a function, for a vector of ints, find all elements that are positive,
and put them in a vector of ints, return that vector. */

vector<int> getPositive(vector<int> nums);

int main() {
    vector<int> nums = {1, 0, 0, 1, 0, 2};

    vector<int> result = getPositive(nums);

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";

    cout << endl;

    return 0;
}

vector<int> getPositive(vector<int> nums) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] > 0)
           result.push_back(nums[i]);

    return result;
}

/* 11/20

1. Write a function to remove an element at pos index of a non-descending
sorted vector of integers called nums. If pos is a valid index, that is, 0 <= pos < num.size(),
delete that element, otherwise, do nothing.
For example, given a vector of ints with elements 1 2 7 8 9, then
(1) remove the element indexed at 1, the vector changes to 1 7 8 9.
(2) remove the element indexed at 5, the vector does not change.
Warning: do not name your function as delete, it will be treated as the existing delete
function used in dynamic allocated memory release, but the parameter list given in our code
does not match that delete function. */

vector<int> removeElement(vector<int> num, int pos) {
    if (pos >= 0 && pos < num.size()) {
        vector<int> result;
        
        for (int i = 0; i < num.size(); i++) {
            if (i != pos) {
                result.push_back(num[i]);
            }
        }

        return result;
    }

    return num;
}

void removeElmByIndex(vector<int>& nums, int pos) {
    if (pos >= 0 && pos < nums.size()) {
       for (int i = pos+1; i < nums.size(); i++)
           nums[i-1] = nums[i];

       nums.pop_back(); 
    }
}

/*  E6.18: append a vector
Write a function
vector<int> append(vector<int> a, vector<int> b)
that appends one vector after another. For example, if a is
1 4 9 16
and b is
9 7 4 9 11
then append returns the vector
1 4 9 16 9 7 4 9 11 */

vector<int> append(vector<int> a, vector<int> b){
    vector<int> result;
    for(int i = 0; i < a.size(); i++){
        result.push_back(a[i]);
    }
    for(int i = 0; i < b.size(); i++){
        result.push_back(b[i]);
    }

    return result;
}

/* Write a function
vector<int> merge_sorted(vector<int> a, vector<int> b)
that merges two sorted vectors, producing a new sorted vector. Keep an index into each vector,
indicating how much of it has been processed already. Each time, append the smallest unprocessed element
from either vector, then advance the index. For example, if a is
1 4 9 16
and b is
4 7 9 9 11
then merge_sorted returns the vector
1 4 4 7 9 9 9 11 16 */

vector<int> merge_sorted(vector<int> a, vector<int> b){
    vector<int> result;
    for(int i = 0; i < a.size(); i++){
        result.push_back(a[i]);
    }
    for(int i = 0; i < b.size(); i++){
        result.push_back(b[i]);
    }
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result.size() - 1; j++) {
            if (result[j] > result[j + 1]) {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }


    return result;
}




/* 12/04

1. Given Person class, extend it and define Doctor class. Here are the signatures
of the constructors and methods provided by Person class.
(A) Each person has a name (as a string) and age (as an int).
(B) Constructor Person() define name as "anonymous" and age as 18.
(C) Constructor Person(string name) uses given parameter name to initialized data member
name, and initialize age as 18.
(D) Constructor Person(string name, int age) uses given parameter name to initialize data
member age. If given parameter age is in the range of [0, 130], then uses given parameter age to initialize data member age, otherwise, set data member age to be 18.
(E) Method string getName() returns the name of a person.
(F) Method mt getAge() returns the age of a person.
(G) Method void setAge(int age) uses given parameter age to reset data member age if the
former is in the range of [0, 130], otherwise, leave the corresponding data member as
it is.
(H) Method void setName(string name) uses given parameter name to reset data member
name.
Each doctor is a person, just with additional data member to describe the name of all
insurances he/she takes. This data member insurances can be a vector of string.
Your job: Declare Doctor class as a subclass of Person and define the following methods.
NO NEED TO define Person class.
1. Default constructor Doctor() with insurances initialized by "medicaid" and "medicare".
2. Write a method, given a string representing a specific insurance, search whether it is
in the vector of insurances or not, if yes, return true, otherwise, return false. */

class Person {
private:
    string name;
    int age;
public:
    Person();
    Person(string name);
    Person(string name, int age);
    string getName() const;
    int getAge() const;
    void setAge(int age);
    void setName(string name);
    string toString() const;
};

Person::Person(){
    name = "anonymous";
    age = 18;
}

Person::Person(string name){
    this->name = name;
    age = 18; // no parameter for age yet
}

Person::Person(string name, int age){

    this->name = name;

    if(age >= 0 && age <= 130){
        this->age = age;
    } else {
        this->age = 18;
    }
}

string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age){
    if(age >= 0 && age <= 130){
        this->age = age;
    } 
}

void Person::setName(string name){
    this->name = name;
}

string Person::toString() const {
    string str = "";
    str += "name: " + name + "\n";
    str += "age: " + to_string(age) + "\n";
    return str;
}

class Doctor : public Person {
private:
    vector<string> insurances;
public:
    Doctor();
    bool searchInsurance(string insurance) const;
};

Doctor::Doctor() : Person() {
    insurances = {"medicaid", "medicare"};
}

bool Doctor::searchInsurance(string target_insurance) const {
    for (int i = 0; i < insurances.size(); i++) {
        if (insurances[i] == target_insurance) {
            return true;
        }
    }
    return false;
}


/* MIDTERM QUESTIONS */

/* Write code in main to read a string (may contain spaces) from console, find out and print out the number of
letter 'a' in it. For example, suppose we enter "apple orange", then print out 2.
Here is a sample input/output:
Enter a string: apple orange
appearances of a: 2 
*/

int main(){
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);

    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a'){
            count++;
        }
    }

    cout << "appearances of a: " << count << endl;

    return 0;
}


/* Define a function, for a given array of integers and its size, find out whether all its elements are even or not.
For example, call the above function on array with values 1, 2, 3, the return is false. Call the above function
on array with values 2, 6, 8, 10, the return is true. */

bool evenArr(int* arr, int size){
    for(int i = 0; i < size - 1; i++){
        if(arr[i] % 2 == 0){
            return true;
        }
    }

    return false;
}

/* Define a function named range, for a given array of integers and its size, return the difference of its
largest and smallest elements. In main function, declare and initialize array with values 1, -2, 6, 9. Call the above function to print
out its return. */

int range(int* arr, int size){
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < size - 1; i++){
        if(arr[i] > arr[0]){
            max = arr[i];
        } else if(arr[i] < arr[0]){
            min = arr[i];
        }
    }

    int difference = max - min;

    return difference;
}

int main() {
    int arr[] = {1, -2, 6, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    int value = range(arr, size);

    cout << value << endl;

    return 0;
}

/* Define a function, for a given string, return a string without digital letters in the original string.
For example, call the above function on "hellol23, hlo2w a3r4e y5ou?", the return is "hello, how are you?".
You may use mt isdigit (int c ); to test whether character is a decimal digit or not. 

*/

string noDigital(string str){
    string result = "";
    for(int i = 0; i < str.length(); i++){
        if(!isdigit(str[i])){
            result += str[i];
        }
    }
    return result;
}


/* RECURSION */

/* Write a recursive function to calculate the factorial of a given non-negative integer n. 
The factorial of n is the product of all positive integers up to n. 
For example, the factorial of 5 (denoted as 5!) is 5 * 4 * 3 * 2 * 1. */

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

/* Implement a recursive function to find the nth term in the Fibonacci sequence. 
The Fibonacci sequence is defined as follows: 
F(0) = 0, F(1) = 1, and F(n) = F(n-1) + F(n-2) for n >= 2.*/

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/* Write a recursive function to calculate the value of x raised to the power of n (x^n). 
Assume that n is a non-negative integer.*/

double power(double x, int n) {
    if (n == 0) {
        return 1;
    }
    return x * power(x, n - 1);
}


/* Write a recursive function to find the sum of digits of a positive integer n. */

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sumOfDigits(n / 10);
}

/* Write a recursive function to find the Greatest Common Divisor (GCD) 
of two positive integers using Euclid's algorithm.*/

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

/* Write a recursive function to calculate the combination "n choose k" using 
the formula C(n, k) = C(n-1, k-1) + C(n-1, k) with base cases C(n, 0) = C(n, n) = 1. */

int combination(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return combination(n - 1, k - 1) + combination(n - 1, k);
}
