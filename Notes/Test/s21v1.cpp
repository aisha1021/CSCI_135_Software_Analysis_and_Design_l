/* 1.1. 

class Undergradate : public Student;

*/

/* 1.2. 

vector<int> ages[] = {17, 36, 65};

*/

/* 1.3. 5 */

/* 1.4. 

bool foo(string str, int index);

*/

/* 1.5. Skipped (not graded) */

/* 1.6. 

struct Person {
    string name;
    int age;
};

*/

/* 1.7. 3 */

/* 1.8. 2 */

/* 1.9.

int arr[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}}; 

*/

/* 1.10.

1 2 2
2 4 6

*/

/* 2.1. 

int size = 10;
int *data = new int[size];

for(int row = 0; row < size; row++) {
    data[row] = rand() % (100 - 60 + 1) + 60;
}

for(int row = 0; row < size; row++){
    sum += data[i];
}

double average = (double) sum / size;
cout << "Average is " << average << endl;

*/

/* 2.2. 

int numDigits(int num){
    if(num > -10 && num < 10){
        return 1;
    }

    return numDigits(num/10) + 1;
}

cout << numDigist(123) << endl;

*/

/* 2.3.

void foo(int* arr, int size){
    for(int i = 0; i < size - 1; i++){
        if(arr[i] == arr[i+1]){
            arr[i] = 0;
            arr[i+1] = 2*arr[i+1];
        }
    }
}

 */

/* 3.

bool inVector(vector<string> data, string target){
    for(int i = 0; i < data.length(); i++){
        if(data[i] == target){
            return true;
        }
    }

    return false;
}

string inBoth(vector<string> vectA, vector<string> vectB) {

    vector<string> result;

    for(int i = 0; i < vectA.size(); i++){
        if(inVector(VectB, vectA[i])){
            result.push_back(vectA[i]);
        }
    }

    return result;
}

*/

/* 4. 

class Circle {
private:
    double radius;
public:
    Circle();
    Circle(double radius);
    void resetRadius(double radius);
    double getRadius() const;
    double getArea() const;
}

Circle::Circle(){
    radius = 1;
}

Circle::Cirlce(double radius){
    if(radius > 0){
        this->radius = radius;
    } else {
        this->radius = 1;
    }
}

void resetRadius(double radius){
    if(radius > 0){
        this->radius = radius;
    }
}

double getRadius() const {
    return radius;
}

double getArea() const {
    return M_PI * radius * radius;
}

*/

/* 5. 

const int NUM_COLUMNS = 3;
bool column_all_O(char arr[][NUM_COLUMNS], int numRows){
    for(int col = 0; col < NUM_COLUMNS; col++){
        num = 0;
        for(int row = 0; row < numRows, row++){
            if(arr[row][col] == 'O'){
                num++;
            }
        }

        if(num == numRows);
        return true;
    }

    return false;
}

*/
