/* 1.1. Student is a superclass of Undergraduate*/

/* 1.2. string names[] = {"Ann", "Bob", "Charles"}; */
 
/* 1.3.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    for (int i = 0; i <= 10; i++){
        cout << pow(2, i) << endl;
    }
    return 0;
} 
*/

/* 1.4. 

#include <iostream>
using namespace std;

bool isPrime(int n);

int count = 0;
for (int i = 0; i < 100; i++){
    if (isPrime(i)){
        count ++;
    }
}
*/

/* 1.5. 97 */

/* 1.6. diesel.weight = 25. 6 */

/* 1.7. 

0
2
4
6
8

*/

/* 1.8. 

2
3
1
5

*/

/* 1.9. 

string arr[2][3] = {{"big", "medium", "small"}, {"smile", "giggle", "laugh"}};

*/

/* 1.10. 

void sort(int& m, int& n);

*/

/* 2. 

int size = 10;
int **data = new *int[size];
for (int row = 0; row < size; row++){
    data[row] = new data[row+1];
}

for (int row = 0; row < size; row++){
    for (int col = 0; col < row + 1; col++){
        data[row][col] = rand % (100 - 60 + 1) + 60;
}

for (int row = 0; row < size; row++){
    delete[] data[row];
    data[row] = nullptr;
}

delete[] data;
data = nullptr;

*/

/* 3. 

Date::Date() {
    int year = 1900;
    int month = 1;
}

void Date::nextMonth(){
    if (month == 12){
        month = 1;
        year++
    } else {
        month++;
    }
}

int main(){
    Date dt;
    dt.nextMonth();
}

*/

/* 4. 

int lastIndex(string* arr, int size, string target){
    for(int i < size - 1; i >= 0; i--){
        if (target == arr[i]){
            return i;
        }
    }
    return -1;
}

*/

/* 5. 

vector<int> postiveArr(int* arr, int size){
    vector <int> result;

    for(int i = 0; i < size; i++){
        if (arr[i] > 0){
            result.push.back(i)
        }
    }

    return result;
}

*/

/* 6. 

class squarePyramid {
private:
    double side;
    double height;
public:
    squarePyramid (double side, double height);
    void resetSide (double side);
    double getSide() const;
    double volume() const;
};

squarePyramid::squarePyramid(double side, double height){
    if (side > 0){
        this->side = side;
    } else {
        this->side = 1;
    }

    if(height > 0){
        this->height = height;
    } else {
        this->height = 1;
    }
}

void squarePyramid::resetSide(double side){
    if(side > 0){
        this->side = side;
    }
}

double sqaurePyramid::getSide() const {
    return side;
}

double squarePyramid::volume() const {
    return 1.0/3 * side * side * height;
}

*/

/* 7. 

bool only_ab(string str){
    int size = str.length();

    if(size == 0){
        return false;
    }

    char ch = 0;
    if(size == 1 && (ch == "a" || ch == "b")){
        return true;
    }

    return (ch == "a" || ch == "b") && only_ab(str.substr(1));
}

*/