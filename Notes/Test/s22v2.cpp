/* 1.1. Undergraduate is a subclass of Student */

/* 1.2. string colors[] = {"Red", "Blue", "Green"} */

/* 1.3. 

for (int i = 0; i < 13; i++){
    cout << pow(3, i) << endl;
}

*/

/* 1.4. 

int count = 0;
for(int i = 100; i <= 200; i++){
    if(isPrime(i)){
        count++;
    }
}

*/

/* 1.5. 3 */

/* 1.6. diesel.breed = "bulldog" */

/* 1.7. 

1
3
5
7
9

*/

/* 1.8. 

2
3
1
5

*/


/* 1.9. 

int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}}; 

*/

/* 1.10 

void sort(double& m, double& n);

*/

/* 2. 

int size = 20;
int **data = new *[size];
for(int row = 0; row < size; row++){
    data[row] = new int[row+1];
}

for(int row = 0; row < size; row++){
    for(int col = 0, col < row + 1; col++){
        data[row][col] = rand() % (200 - 100 + 1) + 100;
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
    int year = 1970;
    int month = 1;
}

void Date::prevMonth() {
    if(month == 1) {
        month = 12;
        year--;
    } else {
        month--;
    }
}

int main() {
    Date dt;

    dt.prevMonth();
}

*/

/* 4. 

int lastOccur(int* arr, int size, int target){
    for(int i = size - 1; i >= 0; i--){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

*/

/* 5. 

vector<int> nonZeros(int* arr, int size){
    vector<int> result;

    for(int i = 0; i < size; i++){
        if(arr[i] != 0){
            result.push_back(arr[i])
        }
    }
    return result;
}

*/

/* 6. 

class Cone {
private:
    double radius;
    double height;
public: 
    Cone(double radius, double height);
    void setHeight(double height);
    double getHeight() const;
    double getVolume() const;
}

Cone::Cone(double radius, double height){
    if(radius > 0){
        this->radius = radius;
    } else {
        this-> radius = 1;
    }

    if(height > 0){
        this->height = height;
    } else{
        this->height = 1;
    }
}

void Cone::setHeight(double height){
    if(height > 0){
        this->height = height;
    }
}

double Cone::getHeight() const {
    return height;
}

double Cone::getVolume() const {
    return 1.0/3 * M_PI * radius * radius * height;
}

*/

/* 7.

bool only_01(string str){
    int size = str.length();

    if(size == 0){
        return false;
    }

    char ch = str[0];
    if(size == 1 && (ch == '0' || ch == '1')){
        return true;
    }

    return (ch == '0' || ch == '1') && only_01(str.substr(1));
}

*/