#include "header.hpp"

void AppUtilities::generateTexts() {
  sf::FloatRect textRect;
  
  m_startingWindowTitle.setString("WELCOME TO SORTING ALGORITHM VISUALIZER");
  textRect = m_startingWindowTitle.getGlobalBounds();
  m_startingWindowTitle.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
  m_startingWindowTitle.setPosition(500.0f, 30.0f);
  m_startingWindowTitle.setFillColor(sf::Color(255, 0, 255));

  m_startingWindowMenu.setString("Keybinds for using this Visualizer\n\n\n\n\n[1] Bubble Sort\n\n\n[2] Selection Sort\n\n\n[3] Insertion Sort\n\n\n[4] Merge Sort\n\n\n[5] Quick Sort\n\n\n[r] Regenerating random array\n\n\n[space] Pausing/Resuming Visualizer\n\n\n[q] Back to this Menu\n\n\n[esc] Quit Application");
  textRect = m_startingWindowMenu.getGlobalBounds();
  m_startingWindowMenu.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
  m_startingWindowMenu.setPosition(500.0f, 350.0f);

  m_bubbleSortTitle.setString("Bubble Sort");
  m_bubbleSortTitle.setPosition(0.0f, 0.0f);
  m_bubbleSortTitle.setFillColor(sf::Color(50, 205, 50));

  m_selectionSortTitle.setString("Selection Sort");
  m_selectionSortTitle.setPosition(0.0f, 0.0f);
  m_selectionSortTitle.setFillColor(sf::Color(50, 205, 50));

  m_insertionSortTitle.setString("Insertion Sort");
  m_insertionSortTitle.setPosition(0.0f, 0.0f);
  m_insertionSortTitle.setFillColor(sf::Color(50, 205, 50));

  m_mergeSortTitle.setString("Merge Sort");
  m_mergeSortTitle.setPosition(0.0f, 0.0f);
  m_mergeSortTitle.setFillColor(sf::Color(50, 205, 50));

  m_quickSortTitle.setString("Quick Sort");
  m_quickSortTitle.setPosition(0.0f, 0.0f);
  m_quickSortTitle.setFillColor(sf::Color(50, 205, 50));
}
