#include "header.hpp"

void AppUtilities::handleEvent() {
  sf::Event event;
  while(m_window.pollEvent(event)) {
    if(event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape) m_window.close();
    if(event.key.code == sf::Keyboard::Q) m_currentWindow = WindowState::titleWindow;
    if(event.key.code == sf::Keyboard::Num1) m_currentWindow = WindowState::bubbleSort;
    if(event.key.code == sf::Keyboard::Num2) m_currentWindow = WindowState::selectionSort;
    if(event.key.code == sf::Keyboard::Num3) m_currentWindow = WindowState::insertionSort;
    if(event.key.code == sf::Keyboard::Num4) m_currentWindow = WindowState::mergeSort;
    if(event.key.code == sf::Keyboard::Num5) m_currentWindow = WindowState::quickSort;
  }
}
