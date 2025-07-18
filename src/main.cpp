#include <chrono>
#include <ctime>
#include "date.hpp"
#include <iostream>
#include <ratio>

using std::chrono::system_clock;

int main() {
  std::string tomorrow{get_tomorrow()};

  std::cout << tomorrow <<'\n';
}
