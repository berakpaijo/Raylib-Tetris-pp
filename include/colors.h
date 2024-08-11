#pragma once
#include "raylib.h"
#include <vector>
#include "../themes/theme.h"

inline std::vector<Color> GetCellColors() {
  return {
    GridC, LBlockC, JBlockC, IBlockC, 
    OBlockC, SBlockC, TBlockC, ZBlockC
  };
}