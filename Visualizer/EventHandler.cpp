#include "header.hpp"

void AppUtilities::handleEvent() {
  sf::Event event;
  while(m_window.pollEvent(event)) {
    if(event.key.code == sf::Keyboard::Escape || event.type == sf::Event::Closed) m_window.close();
    if(event.key.code == sf::Keyboard::Q) m_currentWindow = WindowState::titleWindow;
    if(event.key.code == sf::Keyboard::Num1) m_currentWindow = WindowState::bubbleSort;
    if(event.key.code == sf::Keyboard::Num2) m_currentWindow = WindowState::selectionSort;
    if(event.key.code == sf::Keyboard::Num3) m_currentWindow = WindowState::insertionSort;
    if(event.key.code == sf::Keyboard::Num4) m_currentWindow = WindowState::mergeSort;
    if(event.key.code == sf::Keyboard::Num5) m_currentWindow = WindowState::quickSort;
    if(event.key.code == sf::Keyboard::Space && event.type == sf::Event::KeyReleased) m_isArraySorted = !m_isArraySorted;
  }
}
