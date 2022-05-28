#include "header.hpp"

void AppUtilities::start() {
  AppUtilities::generateTexts();

  AppUtilities::generateRandomArray();

  m_currentWindow = WindowState::titleWindow;
  
  while(m_window.isOpen()) {
    sf::Event event;
    while(m_window.pollEvent(event)) {
      if(event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape) m_window.close();
      if(event.key.code == sf::Keyboard::Q) m_currentWindow = WindowState::titleWindow;
      if(event.key.code == sf::Keyboard::Num1) m_currentWindow = WindowState::bubbleSort;
      if(event.key.code == sf::Keyboard::Num2) m_currentWindow = WindowState::selectionSort;
      if(event.key.code == sf::Keyboard::Num3) m_currentWindow = WindowState::insertionSort;
    }

    m_window.clear(sf::Color::Black);

    switch(m_currentWindow) {
    case WindowState::titleWindow :
      m_window.draw(m_startingWindowTitle);
      m_window.draw(m_startingWindowMenu);
      break;

    case WindowState::bubbleSort :
      m_window.draw(m_bubbleSortTitle);
      AppUtilities::bubbleSort();
      AppUtilities::drawBar();
      break;

    case WindowState::selectionSort :
      m_window.draw(m_selectionSortTitle);
      AppUtilities::selectionSort();
      AppUtilities::drawBar();
      break;

    case WindowState::insertionSort :
      m_window.draw(m_insertionSortTitle);
      AppUtilities::insertionSort();
      AppUtilities::drawBar();
      break;

    case WindowState::mergeSort :
      // AppUtilities::mergeSort();
      AppUtilities::drawBar();
      break;

    case WindowState::quickSort :
      // AppUtilities::quickSort();
      AppUtilities::drawBar();
      break;
    }

    m_window.display();
  }
}
