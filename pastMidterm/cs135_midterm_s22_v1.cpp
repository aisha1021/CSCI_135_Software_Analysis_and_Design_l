int arr[5] = {1, 6, 5, 9, 8}

int foo(string str);

int value = -2 + 3.0 * rand()/RAND_MAX;

double value = sqrt(a);

int n = n % 100;

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));

    int score;
    int scoreGE70 = 0;
    int score60to70 = 0;
    int scoreL60 = 0;

    for(int i = 0; i < 20; i++){
        score = rand() % (100 - 10 + 1) + 10;

        if (score >= 70){
            scoreGE70++;
        } else if (score >=60 && score < 70){
            score60to70++;
        } else{
            scoreL60++;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

void sortString(string& a, string& b){

    string temp;

    if (a.length() > b.length()){
        temp = a;
        a = b;
        b = temp;
    }
}

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("data.txt");

    fin.ignore(INT_MAX, '\n');

    double value;
    fin >> value;

    if (fin.fail()){
        return 0;
    }

    double min;

    while (fin >> value){
        if (value < min){
            min = value;
        }
    }

    cout << "min = " << min << endl;

    fin.close();
    return 0;
}

#include <iostream>
using namespace std;

bool onlyabc (string str){

    if(str.length() == 0){
        return 0;
    }

    for(int i = 0; i < str.length(); i++){
        if (str[i] != 'a' && str[i] != 'b' && str[i] != 'c')
        return false;
    }
    
    return true;

}

#include <iostream>
using namespace std;

int numDigits(int a){
    if(a < 0){
        a = a*(-1);
    }

    int num2s = 0;
    int lastDigit;

    while (a != 0){
        lastDigit = a % 10;
        if(lastDigit == 2)
            num2s++;
        }
        a = a/10;

    return num2s;
}