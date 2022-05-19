#include "header.hpp"

AppUtilities::AppUtilities() {
  sf::VideoMode vm(1000, 700);
  m_window.create(vm, "Sorting-Algorithm-Visualizer", sf::Style::Titlebar | sf::Style::Close);
  m_window.setFramerateLimit(5);

  m_font.loadFromFile("font/TYPEWR__.TTF");

  m_startingWindowTitle.setFont(m_font);
  m_startingWindowTitle.setLetterSpacing(1.3f);

  m_bubbleSortTitle.setFont(m_font);
  m_bubbleSortTitle.setLetterSpacing(1.3f);

  m_selectionSortTitle.setFont(m_font);
  m_selectionSortTitle.setLetterSpacing(1.3f);
}
