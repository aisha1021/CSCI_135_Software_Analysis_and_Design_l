/*
Name: Aisha Malik
Course: CSCI 135
Instructor: Tong Yi
Assignment: Project 2 A & B
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Field.hpp"
using namespace std;

// default connstructor
Field:: Field(){
    Field(7, 2); // default values
}


//non default constructor ( also places the mines )
Field:: Field (int size, int num_mines) {
    if(size <= 3) {
        size = 7; 
    }

    if(num_mines < 2) {
        num_mines = 2; 
    }

    if(num_mines >= size) {
        num_mines = size/3;
    }

    this->num_mines = num_mines;
    this->size = size;

    cells = new int[size];
    checked = new bool[size];

    // sets each cells to 0 and checked to false
    for(int i = 0; i < size; i++) {
        cells[i] = 0;
        checked[i] = false;
    }

    int count = 0;
    srand(time(0));

    while(count < num_mines) { //random placement
        int index = rand() % size;
        if(cells[index] == 0) {
            cells[index] = 1;
            count++;
        }
    }
} 

//deconstructor
Field:: ~Field() {
    delete[] cells;
    cells = nullptr;

    delete[] checked;
    checked = nullptr;
}


//labels at the top
string get_labels(int size) {
    string str;
    for (int i = 0; i < size; i++) { 
        str += "  ";
        if (i < 10)
           str += " " + to_string(i);
        else str += to_string(i);
        str += "  ";
    }
    str += "\n";
    return str;
}

//gets the top 
string get_separate_line(int size) {
    string str = "+";
    for (int i = 0; i < size; i++)
        str += "-----+";
    str += "\n";
    return str;
}

//creates a string based off what has been checked
string Field::to_string() const {
    string str = get_labels(size);
    str += get_separate_line(size);

    str += "|";
    for (int i = 0; i < size; i++) {
       if (cells[i] == 0) 
        {
           if (checked[i] == true)
               str += "  " + std::to_string(neighbor_mines(i)) +
                      "  |";
           else str += "     |";
        }
        else //must have a mine 
            str += "     |";
    }

    str += "\n";
    str += get_separate_line(size);
    return str;
}

//creates the answer string
string Field:: answer_string() const {
    string str = get_labels(size); 
    str += get_separate_line(size);
    str += "|";
    for(int i = 0; i < size; i++) {
        if(cells[i] == 1) {
            str += "  *  |"; 
        }
        else { 
            str += "  " + std::to_string(neighbor_mines(i)) + "  |"; 
        }
    }
    str += "\n";
    str += get_separate_line(size);
    return str;

}

//creates empty layout we use at the start
string Field:: empty_layout_string() const {
    string str = get_labels(size); 
    str += get_separate_line(size);
    str += "|";
    for (int i = 0; i < size; i++) {
        str += "     |";
    }
    str += "\n";
    str += get_separate_line(size);
    return str;
}

// return data member size
int Field:: get_size() const {
    return size;
}

// return data member num_mines
int Field:: get_num_mines() const {
    return num_mines;
}

// returns the number of mines surrounding the index
int Field:: neighbor_mines(int index) const {
    if(cells[index] == 1) { // if current index has mine
        return -1;
    }

    int count = 0;
    if(index > 0 && cells[index - 1] == 1) { 
        count++;
    }
    if(index + 1 < size && cells[index + 1] == 1) { 
        count++;
    }

    return count;
}

//if the index is valid it will marked it as checked
void Field::mark_checked(int index) { 
    if(index >= 0 && index < size) {
        checked[index] = true;
    }
}

//checks if the index has been checked
bool Field:: is_checked(int index) const {
    if(checked[index] == true) {
        return true;
    }
    return false;
}

// checks if the cell element has a mine or not
bool Field:: has_mine(int index) const {
    if(cells[index] == 1) {
        return true;
    }
    return false;
}