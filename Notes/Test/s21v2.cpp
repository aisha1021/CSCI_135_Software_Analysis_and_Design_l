/* 1.1. 

class Dog : public Animal; 

*/

/* 1.2. 

vector<double> weights = {17.2, 36.1 65};

*/

/* 1.3.

11

*/

/* 1.4. 

bool foo(int& m, int& n);

*/

/* 1.5.

2

*/

/* 1.6. 

struct TV {
    int size;
    string model;
};

*/

/* 1.7. 

2

*/

/* 1.8.

2

*/

/* 1.9. 

int arr[3][2] = {{1, 2}, {2, 4}, {5, 6}};

*/

/* 1.10. 

2 3 4 
3 4 5

*/

/* 2.1

int size = 20;
int *data = new int[size];

for(int i = 0; i < size; i++){
    data[i] = rand() % (200 - 100 + 1) + 100;
}

int min = data[0];
int max = data[0];
for(int i = 1; i < size; i++){
    if(data[i] < min){
        min = data[i];
    } else if(data[i] > max){
        max = data[i];
    }

int difference = min = max;
}

*/

/* 2.2. 

int numDigits(int num){
    if(num < 10 && num > -10){
        return 1;
    }

    return numDigits(num/10) + 1;
}

int numDigits(123);

*/

/* 2.3.

void foo(int* arr, int size){
    for(int i = 0; i < size - 1; i++){
        if(arr[i] == arr[i+1]){
            arr[i] = 2*arr[i];
            arr[i+1] = 0;
        }
    }
}

4 0 2 0 0

*/

/* 3.

bool is_in(vector<string> str, string target){
    for(int i = 0; i < str.size(); i++){
        if(data[i] == target){
            return true;
        }
    }
}

*/