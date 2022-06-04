#pragma once
#include <vector>
#include <random>
#include <chrono>
#include <SFML/Graphics.hpp>

enum WindowState {
  titleWindow,
  
  bubbleSort,

  selectionSort,

  insertionSort,

  mergeSort,

  quickSort
};

class AppUtilities {
private:
  std::vector<int> m_v;

  bool m_isArraySorted;

  sf::RenderWindow m_window;

  WindowState m_currentWindow;

  sf::Font m_font;

  sf::Text m_startingWindowTitle;
  sf::Text m_startingWindowMenu;
  sf::Text m_bubbleSortTitle;
  sf::Text m_selectionSortTitle;
  sf::Text m_insertionSortTitle;
  sf::Text m_mergeSortTitle;
  sf::Text m_quickSortTitle;

public:
  AppUtilities();

  void start();

  void generateTexts();
    
  void generateRandomArray();

  void drawBar();

  void handleEvent();

  void handleWindow();

  void bubbleSort();

  void selectionSort();

  void insertionSort();
};
