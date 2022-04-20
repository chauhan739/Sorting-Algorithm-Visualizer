#include "header.hpp"

void AppUtilities::generateRandomArray() {
  for(int i = 0; i < 100; i++) v.push_back(i+1);

  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  shuffle(v.begin(), v.end(), std::default_random_engine(seed));
}
