#include "vehicle_purchase.h"

#include <iostream>
using std::string;

namespace vehicle_purchase {
bool needs_license(string kind) {
  return kind == "car" || kind == "truck";
}

string choose_vehicle(string option1, string option2) {
  return std::min(option1, option2) + " is clearly the better choice.";
}

double calculate_resell_price(double original_price, double age) {
  // age  <  3 = 80%
  //      < 10 = 50%
  // age     3 - 10 = 70%
  if (age < 3) {
    return original_price * 0.8;
  }
  if (age < 10) {
    return original_price * 0.7;
  }
  return original_price * 0.5;
}
}
