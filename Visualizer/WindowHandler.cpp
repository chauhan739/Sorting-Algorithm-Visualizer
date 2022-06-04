#include "header.hpp"

void AppUtilities::handleWindow() {
  switch(m_currentWindow) {
  case WindowState::titleWindow :
    m_window.draw(m_startingWindowTitle);
    m_window.draw(m_startingWindowMenu);
    break;

  case WindowState::bubbleSort :
    m_window.draw(m_bubbleSortTitle);
    AppUtilities::bubbleSort();
    AppUtilities::drawBar();
    break;

  case WindowState::selectionSort :
    m_window.draw(m_selectionSortTitle);
    AppUtilities::selectionSort();
    AppUtilities::drawBar();
    break;

  case WindowState::insertionSort :
    m_window.draw(m_insertionSortTitle);
    AppUtilities::insertionSort();
    AppUtilities::drawBar();
    break;

  case WindowState::mergeSort :
    m_window.draw(m_mergeSortTitle);
    // AppUtilities::mergeSort();
    AppUtilities::drawBar();
    break;

  case WindowState::quickSort :
    m_window.draw(m_quickSortTitle);
    // AppUtilities::quickSort();
    AppUtilities::drawBar();
    break;
  }
}
