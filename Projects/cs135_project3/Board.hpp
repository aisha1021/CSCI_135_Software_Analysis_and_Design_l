#ifndef BOARD_H 
#define BOARD_H 
#include <vector>
using namespace std;

class Board
{
private:
    int** panel; 
       //two dimensional array with numRows rows
       //and numCols columns
    int numRows; 
    int numCols;
    int target; //what is the goal
    int max; //the current max in all cells of panel
    void allocateMemory();
        //apply dynamic memory for panel
        //so that panel has numRows rows and
        //numCols columns
    void merge(vector<int>& result, int& max);

public:
    Board(); //construct a 3 x 3 panel
    Board(int m); //construct a m x m panel
    Board(int m, int n); //construct a m x n panel
    void setTarget(int goal);
        //set target (goal) of the game
    ~Board(); //destructor,
        //when no longer need the current object,
        //release dynamic memory of this object.
    int getNumRows() const;
    int getNumCols() const;
    int getTarget() const;
    int getMax() const;

    void clear();
        //set each cell of the panel to be zero
    void print() const;
        //print the panel
    void selectRandomCell(int& row, int& col);
        //select a random cell from empty cell
    void pressUp();
    void pressDown();
    void pressLeft();
    void pressRight(); //press right key
    void start(); //start the game
    bool noAdjacentSameValue() const;
        //if there is no two adjacent cells
        //share same value, return true,
        //otherwise, return false.
};
#endif
