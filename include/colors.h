#pragma once
#include "raylib.h"
#include <vector>
#include "../themes/catppuccin/frappe.h"

Frappe frappe;

inline std::vector<Color> GetCellColors() {
  return {
  frappe.FrappeSurface2, frappe.FrappeRed, frappe.FrappePeach, frappe.FrappeYellow, 
  frappe.FrappeGreen, frappe.FrappeMauve, frappe.FrappeSky, frappe.FrappeBlue
  };
}