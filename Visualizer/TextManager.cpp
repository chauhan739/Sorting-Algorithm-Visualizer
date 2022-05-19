#include "header.hpp"

void AppUtilities::generateTexts() {
  m_startingWindowTitle.setString("WELCOME TO SORTING ALGORITHM VISUALIZER");
  sf::FloatRect textRect = m_startingWindowTitle.getGlobalBounds();
  m_startingWindowTitle.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
  m_startingWindowTitle.setPosition(500.0f, 30.0f);
}
