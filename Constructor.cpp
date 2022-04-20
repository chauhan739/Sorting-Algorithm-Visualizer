#include "header.hpp"

AppUtilities::AppUtilities() {
  sf::VideoMode vm(1000, 700);
  window.create(vm, "Sorting-Algorithm-Visualizer", sf::Style::Titlebar);
  window.setFramerateLimit(5);
}
