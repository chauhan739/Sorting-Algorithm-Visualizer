#include "header.hpp"

AppUtilities::AppUtilities() {
  sf::VideoMode vm(1000, 700);
  m_window.create(vm, "Sorting-Algorithm-Visualizer", sf::Style::Titlebar);
  m_window.setFramerateLimit(5);
}
