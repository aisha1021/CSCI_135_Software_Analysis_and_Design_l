#include <iostream>
#include "Field.hpp"
#include "Game.hpp"
using namespace std;
int main()
{
 //call default constructor using
 
 Game minesweeper(7, 2);
 minesweeper.play();
 return 0;
}