#include "../include/grid.h"
#include <iostream>
#include "../include/colors.h"

Grid::Grid(){
  numRows = 30;
  numCols = 20;
  cellSize = 27;
  Initialize();
  colors = GetCellColors();
}

void Grid::Initialize(){
  for (int irow = 0; irow < numRows; irow++){
    for (int icol = 0; icol < numCols; icol++) {
      grid[irow][icol] = 0;
    }
  }
}

void Grid::Print(){
  for (int irow = 0; irow < numRows; irow++){
    for (int icol = 0; icol < numCols; icol++) {
      std::cout << grid[irow][icol] << " ";
    }
    std::cout << std::endl;
  }
}

void Grid::Draw() {
  for (int irow = 0; irow < numRows; irow++){
    for (int icol = 0; icol < numCols; icol++) {
      int cellValue = grid[irow][icol];
      DrawRectangle(icol * cellSize + 11, irow * cellSize + 11, cellSize - 1 , cellSize - 1, colors[cellValue]);
    }
  }
}

bool Grid::isCellOutside(int row, int column){
  if (row >= 0 && row < numRows && column >= 0 && column < numCols){
    return false;
  }
  return true;
}

bool Grid::isCellEmpty(int row, int column){
  if (grid[row][column] == 0){
    return true;
  }
  return false;
}

bool Grid::isRowFull(int row){
  for (int column = 0; column < numCols; column++){
    if (grid[row][column] == 0) return false;
  }
  return true;
}
void Grid::ClearRow(int row){
  for (int column = 0; column < numCols; column++){
    grid[row][column] = 0;
  }
}

void Grid::MoveRowDown(int row, int numRows){
  for (int column = 0; column < numCols; column++){
    grid[row+numRows][column] = grid[row][column];
    grid[row][column] = 0;
  }
}

int Grid::ClearFullRows(){
  int completed = 0;
  for (int row = numRows - 1; row >= 0; row--){
    if (isRowFull(row)) {
      ClearRow(row);
      completed++;
    }
    else if (completed > 0) MoveRowDown(row, completed);
  }
  return completed;
}