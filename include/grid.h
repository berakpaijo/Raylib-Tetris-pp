#pragma once
#include <vector>
#include "raylib.h"
#include "colors.h"

class Grid{
  public:
  int grid[30][20];
  Grid();
  void Draw();
  void Initialize();
  void Print();
  bool isCellOutside(int row, int column);
  bool isCellEmpty(int row, int column);
  int ClearFullRows();

  private:
  int numRows, numCols, cellSize;
  std::vector<Color> colors = GetCellColors();
  bool isRowFull(int row);
  void ClearRow(int row);
  void MoveRowDown(int row, int numRows);
};