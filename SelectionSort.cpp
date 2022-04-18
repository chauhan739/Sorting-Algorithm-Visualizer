#include "header.hpp"

void selectionSort(std::vector<int> &v) {
  size_t n = v.size();

  for(size_t i = 0; i < (n - 1); i++) {
    size_t iMin = i;
    for(size_t j = (i + 1); j < n; j++) {
      if(v.at(j) < v.at(iMin)) iMin = j;
    }
    std::swap(v.at(i), v.at(iMin));
  }
}
