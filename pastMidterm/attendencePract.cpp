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

 int isValid(int arr[], int index, int size){
    if(0 <= index && index < size){
        for(int i = index; i < size - 1; i++){
            arr[i] = arr[i + 1];
        }
        size--;
    }
    return size;
}

int redundantElements(int arr[], int& size){
    if(size <= 1){
        return size;
    }
    int newSize = 1;

    for(int i = 1; i < size; i++){
        if(arr[i] != arr[i - 1]){
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    size = newSize;
    return size;
}

int main(){
    int arr[] = {1, 2, 2, 2, 3, 3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int newSize = redundantElements(arr, size);

    cout << newSize << endl;

    return 0;
}