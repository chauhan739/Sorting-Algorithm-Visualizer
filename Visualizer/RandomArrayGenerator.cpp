#include "header.hpp"

void AppUtilities::generateRandomArray() {
  m_v.clear();
  
  for(int i = 0; i < 100; i++) m_v.push_back(i+1);

  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  shuffle(m_v.begin(), m_v.end(), std::default_random_engine(seed));
}
