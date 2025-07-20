#include <chrono>
#include <ctime>
#include "date.hpp"
#include <iostream>
#include <Magick++.h>
#include <ratio>
#include "render.hpp"

using std::chrono::system_clock;

int main() {
  std::string tomorrow{get_tomorrow()};

  render_img(tomorrow); 
}
