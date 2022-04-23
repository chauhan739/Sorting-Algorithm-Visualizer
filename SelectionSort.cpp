#include "header.hpp"

void AppUtilities::selectionSort() {
  size_t n = m_v.size();

  for(size_t i = 0; i < (n - 1); i++) {
    size_t iMin = i;
    for(size_t j = (i + 1); j < n; j++) {
      if(m_v.at(j) < m_v.at(iMin)) iMin = j;
    }
    std::swap(m_v.at(i), m_v.at(iMin));
  }
}
