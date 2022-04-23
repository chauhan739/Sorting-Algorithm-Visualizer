#pragma once
#include <vector>
#include <random>
#include <chrono>
#include <SFML/Graphics.hpp>

class AppUtilities {
private:
  std::vector<int> m_v;

  sf::RenderWindow m_window;

public:
  AppUtilities();

  void start();
  
  void generateRandomArray();

  void drawBar();

  void bubbleSort();

  void selectionSort();
};
