#include "header.hpp"

void AppUtilities::handleEvent() {
  sf::Event event;
  while(m_window.pollEvent(event)) {
    if(event.key.code == sf::Keyboard::Escape || event.type == sf::Event::Closed) m_window.close();
    if(event.key.code == sf::Keyboard::Q && event.type == sf::Event::KeyReleased)
      m_currentWindow = WindowState::titleWindow;
    if(event.key.code == sf::Keyboard::Num1 && event.type == sf::Event::KeyReleased)
      m_currentWindow = WindowState::bubbleSort;
    if(event.key.code == sf::Keyboard::Num2 && event.type == sf::Event::KeyReleased)
      m_currentWindow = WindowState::selectionSort;
    if(event.key.code == sf::Keyboard::Num3 && event.type == sf::Event::KeyReleased)
      m_currentWindow = WindowState::insertionSort;
    if(event.key.code == sf::Keyboard::Num4 && event.type == sf::Event::KeyReleased)
      m_currentWindow = WindowState::mergeSort;
    if(event.key.code == sf::Keyboard::Num5 && event.type == sf::Event::KeyReleased)
      m_currentWindow = WindowState::quickSort;
    if(event.key.code == sf::Keyboard::Space && event.type == sf::Event::KeyReleased)
      m_isArraySorted = !m_isArraySorted;
    if(event.key.code == sf::Keyboard::R && event.type == sf::Event::KeyReleased)
      AppUtilities::generateRandomArray();
  }
}
