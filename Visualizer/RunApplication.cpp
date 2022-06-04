#include "header.hpp"

void AppUtilities::start() {
  AppUtilities::generateTexts();

  AppUtilities::generateRandomArray();

  m_currentWindow = WindowState::titleWindow;
  
  while(m_window.isOpen()) {
    AppUtilities::handleEvent();

    m_window.clear(sf::Color::Black);

    AppUtilities::handleWindow();

    m_window.display();
  }
}
