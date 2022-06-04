#include "../Visualizer/header.hpp"

void AppUtilities::bubbleSort() {
  size_t n = m_v.size();

  for(size_t k = 1; k < (n - 1); k++) {
    bool changed = false;
    for(size_t i = 0; i < (n - k); i++) {
      // std::this_thread::sleep_for(std::chrono::milliseconds(10));
      if(m_v.at(i) > m_v.at(i+1)) {
	std::swap(m_v.at(i), m_v.at(i+1));
	changed = true;
      }
    }
    if(changed) break;
  }
}
