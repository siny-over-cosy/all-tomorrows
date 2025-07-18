#include "date.hpp"

#include <chrono>
#include <ctime>
#include <ratio>
#include <string>

using std::chrono::system_clock;

std::string get_tomorrow() {
  std::chrono::duration<int, std::ratio<60*60*24>> durationDay(1); // duration of 1 day
  system_clock::time_point tomorrow = system_clock::now() + durationDay;

  // casting to tm type to extract month and day to string
  std::time_t tomorrowTimestamp{system_clock::to_time_t(tomorrow)};
  struct tm tomorrowTimeDate{*localtime(&tomorrowTimestamp)};

  // get month-day of tomorrow's date and cast to c-style string (cuz chrono is senile)
  char tomorrowMonthDay[13];
  strftime(tomorrowMonthDay, 13, "%B %e", &tomorrowTimeDate);

  return tomorrowMonthDay;
}
