#pragma once

#include <vector>
#include <random>
#include <chrono>
#include <SFML/Graphics.hpp>

class AppUtilities {
private:
  std::vector<int> v;

public:
  sf::RenderWindow window;
  
  AppUtilities();
  
  void generateRandomArray();

  void drawBar(sf::RenderWindow &);

  void bubbleSort();

  void selectionSort();
};
