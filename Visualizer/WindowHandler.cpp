#include "header.hpp"

void AppUtilities::handleWindow() {
  switch(m_currentWindow) {
  case WindowState::titleWindow :
    m_window.draw(m_startingWindowTitle);
    m_window.draw(m_startingWindowMenu);
    break;

  case WindowState::bubbleSort :
    m_window.draw(m_bubbleSortTitle);
    if(m_isArraySorted) AppUtilities::bubbleSort();
    AppUtilities::drawBar();
    break;

  case WindowState::selectionSort :
    m_window.draw(m_selectionSortTitle);
    if(m_isArraySorted) AppUtilities::selectionSort();
    AppUtilities::drawBar();
    break;

  case WindowState::insertionSort :
    m_window.draw(m_insertionSortTitle);
    if(m_isArraySorted) AppUtilities::insertionSort();
    AppUtilities::drawBar();
    break;

  case WindowState::mergeSort :
    m_window.draw(m_mergeSortTitle);
    // if(m_isArraySorted) AppUtilities::mergeSort();
    AppUtilities::drawBar();
    break;

  case WindowState::quickSort :
    m_window.draw(m_quickSortTitle);
    // if(m_isArraySorted) AppUtilities::quickSort();
    AppUtilities::drawBar();
    break;
  }
}
