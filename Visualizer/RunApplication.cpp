#include "header.hpp"

void AppUtilities::start() {
  AppUtilities::generateRandomArray();
  
  bool isPressed = false;
  
  while(m_window.isOpen()) {
    sf::Event event;
    while(m_window.pollEvent(event)) {
      if(event.key.code == sf::Keyboard::Escape) m_window.close();
      if(event.key.code == sf::Keyboard::Enter) isPressed = true;
    }

    if(isPressed) {
      AppUtilities::bubbleSort();
      // AppUtilities::selectionSort();
    }

    m_window.clear(sf::Color::Black);

    AppUtilities::drawBar();
    m_window.draw(m_title);

    m_window.display();
  }
}
