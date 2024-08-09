#pragma once
#include <vector>
#include <map>
#include "../src/position.cpp"
#include "colors.h"

class Block{
  public:
  Block();
  void Draw(int offset_x, int offset_y);
  void Move(int rows, int columns);
  std::vector<Position> GetCellPosition();
  void Rotate();
  void undoRotation();
  int id;
  std::map<int, std::vector<Position>> cells;

  private:
  int cellSize;
  int rotationState;
  std::vector<Color> colors;
  int rowOffset, columnOffset;
};