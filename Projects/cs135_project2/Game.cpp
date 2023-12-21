/*
Name: Aisha Malik
Course: CSCI 135
Instructor: Tong Yi
Assignment: Project 2 C & D
*/

#include "Game.hpp"
#include "Field.hpp"
#include <iostream>
#include <ctime>
using namespace std;

Game::Game() : area(7,2){
}

Game::Game(int size, int num_mines) : area(size, num_mines){
    
}
int Game::input() const{

    
    int size = area.get_size();
    cout << "Please choose a cell (the first starts from 0): ";
    int num;
    cin >> num;

    while(num < 0 || num >= size || area.is_checked(num)){
        if (area.is_checked(num)){
            cout << "Cell " << num << " is already chosen. Please re-enter: ";
        }
        else if(num <0 || num >= size){
            cout << "Enter an integer in [0, " << size-1 << "]: ";
        }
        cin >> num;
    }

    return num;
}

void Game::play(){


    cout << area.empty_layout_string() << endl;
    bool minePressed = false;
    bool isActive = true;
    int round = 1;
    int numPressed = 0;

while(isActive){

    if(numPressed >= area.get_size()-area.get_num_mines()){
        break;
    }
    else{
        cout << "Round " << round <<": ";
    }

    int num = input();

    if(area.has_mine(num)){
    cout << "Mine explodes! Game ends." << "\n" << "\n" <<"The answer is " << endl;

    minePressed = true;
    break;
    }

    else{
        area.mark_checked(num);
        cout << area.to_string() << endl;
        numPressed++;
    }

    round++;
    
}


if (minePressed == false){
cout << "Congratulations! Find out all the cells without mines." << "\n" << "\n" << "The answer is " << endl;
}
cout << area.answer_string() << endl;
cout <<"------------------------------------------------------------------------------------------------" << endl;

}
