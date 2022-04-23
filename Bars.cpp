#include "header.hpp"

void AppUtilities::drawBar() {
  sf::RectangleShape bar;
  bar.setFillColor(sf::Color::White);

  float temp = 1.0f;
  
  for(int i = 0; i < 100; i++) {
    bar.setSize(sf::Vector2f(9.0f, m_v.at(i) * 7));
    bar.setOrigin(0, bar.getSize().y);
    bar.setPosition(temp, 700.0f);
    
    m_window.draw(bar);

    temp += 10.0f;
  }
}
