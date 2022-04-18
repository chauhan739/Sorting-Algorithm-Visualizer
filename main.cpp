#include "header.hpp"

int main() {
  std::vector<int> arr;
  generateRandomArray(arr);
  
  sf::VideoMode vm(1000, 700);
  sf::RenderWindow window(vm, "Sorting-Algo Visualizer", sf::Style::Titlebar);
  window.setFramerateLimit(5);

  bool isPressed = false;

  while(window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if(event.key.code == sf::Keyboard::Escape) window.close();
      if(event.key.code == sf::Keyboard::Enter) isPressed = true;
    }

    if(isPressed) {
      // bubbleSort(arr);
      selectionSort(arr);
    }
    
    window.clear(sf::Color::Black);

    drawBar(arr, window);
    
    window.display();
  }

  return EXIT_SUCCESS;
}
