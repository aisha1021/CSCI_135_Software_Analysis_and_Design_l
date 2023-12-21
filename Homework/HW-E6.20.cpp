/* 
Name: Aisha Malik
Course: CSCI 135
Instructor: Tong Yi
Assignment: E6.20

Write a function
vector<int> merge_sorted(vector<int> a, vector<int> b)
that merges two sorted vectors, producing a new sorted vector. Keep an index into each vector, indicating how much of it has been processed already. Each time, append the smallest unprocessed element from either vector, then advance the index. For example, if a is
    1 4 9 16
and b is
    4 7 9 9 11 
then merge_sorted returns the vector
1 4 4 7 9 9 9 11 16
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> merge_sorted(const vector<int>& a, const vector<int>& b) {
    vector<int> result;

    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            result.push_back(a[i]);
            i++;
        } else {
            result.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size()) {
        result.push_back(a[i]);
        i++;
    }

    // Append the remaining elements from vector b (if any)
    while (j < b.size()) {
        result.push_back(b[j]);
        j++;
    }

    return result;
}

int main() {
    // Example usage
    vector<int> a = {1, 4, 9, 16};
    vector<int> b = {4, 7, 9, 9, 11};

    vector<int> result = merge_sorted(a, b);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
