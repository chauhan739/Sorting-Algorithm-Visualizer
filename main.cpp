#include "header.hpp"

int main() {
  AppUtilities run;
  run.generateRandomArray();

  bool isPressed = false;

  while(run.window.isOpen()) {
    sf::Event event;
    while (run.window.pollEvent(event)) {
      if(event.key.code == sf::Keyboard::Escape) run.window.close();
      if(event.key.code == sf::Keyboard::Enter) isPressed = true;
    }

    if(isPressed) {
      run.bubbleSort();
      // run.selectionSort();
    }
    
    run.window.clear(sf::Color::Black);

    run.drawBar(run.window);
    
    run.window.display();
  }

  return EXIT_SUCCESS;
}
