#include "header.hpp"

void AppUtilities::bubbleSort() {
  size_t n = v.size();

  for(size_t k = 1; k < (n - 1); k++) {
    bool changed = false;
    for(size_t i = 0; i < (n - k); i++) {
      if(v.at(i) > v.at(i+1)) {
	std::swap(v.at(i), v.at(i+1));
	changed = true;
      }
    }
    if(changed) break;
  }
}
