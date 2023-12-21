/* 
Name: Aisha Malik
Course: CSCI 135
Instructor: Tong Yi
Assignment: Homework E6.18 

Write a function
    vector<int> merge(vector<int> a, vector<int> b)
that merges two vectors, alternating elements from both vectors. 
If one vector is shorter than the other, then alternate as long as you can and then append the remain- ing elements 
from the longer vector.
For example, if a is
    1 4 9 16 
and b is
    9 7 4 9 11
then merge returns the vector
    1 9 4 7 9 4 16 9 11
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> append(const vector<int>& a, const vector<int>& b) {
    vector<int> result = a;

    result.insert(result.end(), b.begin(), b.end());

    return result;
}

int main() {
    vector<int> a = {1, 4, 9, 16};
    vector<int> b = {9, 7, 4, 9, 11};

    vector<int> result = append(a, b);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}