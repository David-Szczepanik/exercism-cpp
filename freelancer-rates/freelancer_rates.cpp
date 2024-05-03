#include <iostream>
#include <cmath>

double daily_rate(double hourly_rate)
{
  return hourly_rate * 8;
}

double apply_discount(double before_discount, double discount)
{
  return before_discount - (before_discount * (discount / 100));
}

int monthly_rate(double hourly_rate, double discount)
{
  double monthly = 22 * daily_rate(hourly_rate);
  // std::cout << apply_discount(monthly, discount) << "<-" << std::endl;
  return std::ceil(apply_discount(monthly,discount));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount)
{
  // TODO: Implement a function that takes a budget, an hourly rate, and a
  // discount, and calculates how many complete days of work that covers.
  
  return 0;
}
