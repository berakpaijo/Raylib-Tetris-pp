#pragma once
#include "raylib.h"
#include <vector>

const Color Surface1 = {98, 104, 128, 255};
const Color Red = {231, 130, 132, 255};
const Color Peach = {239, 159, 118, 255};
const Color Yellow = {229, 200, 144, 255};
const Color Green = {166, 209, 137, 255};
const Color Mauve = {202, 158, 230, 255};
const Color Sky = {153, 209, 219, 255};
const Color Blue = {140, 170, 238, 255};
const Color Surface0 = {65, 69, 89,255};

inline std::vector<Color> GetCellColors() {
  return {Surface1, Red, Peach, Yellow, Green, Mauve, Sky, Blue};
}