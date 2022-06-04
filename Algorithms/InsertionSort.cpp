#include "../Visualizer/header.hpp"

void AppUtilities::insertionSort() {
  size_t n = m_v.size();

  for(size_t i = 1; i < n; i++) {
    int val = m_v.at(i), cmpInd = i - 1;
    while(cmpInd >= 0 && m_v.at(cmpInd) > val) {
      m_v.at(cmpInd + 1) = m_v.at(cmpInd);
      cmpInd--;
    }
    m_v.at(cmpInd + 1) = val;
  }
}
