#pragma once

#include <vector>
#include <random>
#include <chrono>
#include <SFML/Graphics.hpp>

/**
 * Generate a random array at every call.
 * Definition present in @RandomArrayGenerator.cpp
 */
void generateRandomArray(std::vector<int> &);

/**
 * Represent each integral number in the array as a vertical rectangular bars.
 * Definition present in @Bars.cpp
 */
void drawBar(std::vector<int> &, sf::RenderWindow &);

/**
 * A type of Sorting Algorithm.
 * Definition present in @BubbleSort.cpp
 */
void bubbleSort(std::vector<int> &);

/**
 * A type of Sorting Algorithm
 * Definition present in @SelectionSort.cpp
 */
void selectionSort(std::vector<int> &);

