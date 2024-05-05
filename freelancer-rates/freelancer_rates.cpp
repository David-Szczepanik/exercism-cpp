#include <iostream>
#include <cmath>

double daily_rate(double hourly_rate) {
  return hourly_rate * 8;
}

double apply_discount(double before_discount, double discount) {
  return before_discount - (before_discount * (discount / 100));
}

int monthly_rate(double hourly_rate, double discount) {
  double monthly = 22 * daily_rate(hourly_rate);
  // std::cout << apply_discount(monthly, discount) << "<-" << std::endl;
  return ceil(apply_discount(monthly,discount));
}

int days_in_budget(int budget, double hourly_rate, double discount) {
  double day_after_discount = apply_discount(daily_rate(hourly_rate), discount);

  return floor(budget / day_after_discount);
}
