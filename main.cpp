#include <vector>
#include <random>
#include <chrono>
#include <SFML/Graphics.hpp>

void generateRandomArray(std::vector<int> &);
void bubbleSort(std::vector<int> &);
void drawBar(std::vector<int> &, sf::RenderWindow &);

int main() {
  std::vector<int> arr;
  generateRandomArray(arr);
  
  sf::VideoMode vm(1000, 700);
  sf::RenderWindow window(vm, "Sorting-Algo Visulaizer", sf::Style::Titlebar);
  window.setFramerateLimit(5);

  bool isPressed = false;

  while(window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if(event.key.code == sf::Keyboard::Escape) window.close();
      if(event.key.code == sf::Keyboard::Enter) isPressed = true;
    }

    //code
    if(isPressed) bubbleSort(arr);
    
    window.clear(sf::Color::Black);

    drawBar(arr, window);
    
    window.display();
  }

  return EXIT_SUCCESS;
}

void generateRandomArray(std::vector<int>& v) {
  for(int i = 0; i < 100; i++) v.push_back(i+1);

  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  shuffle(v.begin(), v.end(), std::default_random_engine(seed));
}

void bubbleSort(std::vector<int> &v) {
  size_t n = v.size();

  for(size_t k = 1; k < (n - 1); k++) {
    bool changed = false;
    for(size_t i = 0; i < (n - k); i++) {
      if(v.at(i) > v.at(i+1)) {
	std::swap(v.at(i), v.at(i+1));
	changed = true;
      }
    }
    if(changed) break;
  }
}

void drawBar(std::vector<int>& v, sf::RenderWindow& window) {
  sf::RectangleShape bar;
  bar.setFillColor(sf::Color::White);

  float temp = 1.0f;
  
  for(int i = 0; i < 100; i++) {
    bar.setSize(sf::Vector2f(9.0f, v.at(i) * 7));
    bar.setOrigin(0, bar.getSize().y);
    bar.setPosition(temp, 700.0f);
    
    window.draw(bar);

    temp += 10.0f;
  }
}
