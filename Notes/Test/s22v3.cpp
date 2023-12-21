/* 1.1. Animal is the superclass of Dog*/

/* 1.2. 

string shapes[] = {"Square", "Triangle"};

*/

/* 1.3. 

for(int i = 0; i <= 15; i++){
    cout << pow(4, i) << endl;
}

*/

/* 1.4. 

int count = 0;
for(int i = 20; i <= 100; i++){
    if(isPrime(i)){
        count++
    }
}

*/

/* 1.5. 4 */

/* 1.6. 

mew.breed = "Ragdoll";

*/

/* 1.7. 

0
3
6
9

*/

/* 1.8. 

2
3
1
5

*/

/* 1.9. 

double arr[3][2] = {{1.6, 2.7}, {3.0, 4.0}, {5.3, 6.9}}; 

*/

/* 1.10

void sort(float& m, float& n);

*/

/* 2. 

int size = 15;
int **data = new int*[size];
for(int row = 0; row < size; row++) {
    data[row] = new int[row+1];
}

for(int row = 0; row < size; row++){
    for(int col = 0; col < row + 1; col++){
        data[row][col] = rand() % (100 - 10 + 1) + 10;
    }
}

for(int row = 0; row < size; row++){
    delete[] data[row];
    data[row] = nullptr;
}

delete[] data;
data = nullptr;

*/

/* 3.

Date::Date() {
    year = 1900;
    month = 12;
}

Date::nextTwoMonth(){
    if(month == 11){
        month = 1;
        year++;
    }
    else if(month == 12){
        month = 2;
        year++;
    }
    else {
        month += 2;
    }
}

int main() {
    Date dt;
    dt.nextTwoMonth();

    return 0;
}

*/

/* 4. 

int lastOccur(int* arr, int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
}

*/

/* 5. 

vector<int> onlyNeg(int* arr, int size){
    vector<int> temp;

    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            temp.push_back(arr[i]);
        }
    }

    return temp;
}

*/

/* 6. 

class triPrism {
private:
    double side;
    double height;
public:
    triPrism(double side, double height);
    void resetSide(double side);
    double getSide() const;
    double getVolume() const;
};

triPrism::triPrism(double side, double height){
    if(side > 0){
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

void triPrism::resetSide(double side){
    if(side > 0){
        this->side = side;
    }
}

double triPrism::getSide() const{
    return side;
}

double triPrism::getVolume() const{
    return sqrt(3.0)/4 * side * side * height;
}

*/

/* 7. 

bool only_xy(string str){
    int size = str.length();

    if(size == 0){
        return false;
    }

    char ch = arr[0];
    if(size == 1 && (ch == 'x' || ch == 'y')){
        return true;
    }

    return (ch == 'x' || ch == 'y') && only_xy(str.substr(1))
}

*/