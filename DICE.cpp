#include <iostream>
#include <limits>
#include <random>
#include <chrono>

int printTitle(), printDice(int randnum), RNG(std::mt19937 &rng);

int main() {

  char input;
  std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
  printTitle();

  do {

    std::cout << "\n" << "Press enter to roll or 'q' to quit:";
    input = std::cin.get(); 

    if (input != 'q') {
      int randnum = RNG(rng);
      printDice(randnum);
    }

  } while (input != 'q');
  std::cout << "Thanks for playing!";
}

int printTitle() {

  std::cout << "8888888b. 8888888 .d8888b.  8888888888      .d8888b.         d8888 888b     d888 8888888888" << "\n"
            << "888  \"Y88b  888  d88P  Y88b 888            d88P  Y88b       d88888 8888b   d8888 888" << "\n"
            << "888    888  888  888    888 888            888    888      d88P888 88888b.d88888 888" << "\n"
            << "888    888  888  888        8888888        888            d88P 888 888Y88888P888 8888888" << "\n"
            << "888    888  888  888        888            888  88888    d88P  888 888 Y888P 888 888" << "\n"
            << "888    888  888  888    888 888            888    888   d88P   888 888  Y8P  888 888" << "\n"
            << "888  .d88P  888  Y88b  d88P 888            Y88b  d88P  d8888888888 888   \"   888 888" << "\n"
            << "8888888P\" 8888888 \"Y8888P\"  8888888888      \"Y8888P88 d88P     888 888       888 8888888888";
  return 0;
}

int printDice(int randnum) {

  switch (randnum) {
    case 1:
      std::cout << " _________" << "\n"
                << "|         |" << "\n"
                << "|    _    |" << "\n"
                << "|   |_|   |" << "\n"
                << "|         |" << "\n"
                << "|_________|" << "\n";
      break;
    case 2:
      std::cout << " _________" << "\n"
                << "|  _      |" << "\n"
                << "| |_|     |" << "\n"
                << "|      _  |" << "\n"
                << "|     |_| |" << "\n"
                << "|_________|" << "\n";
      break;
    case 3:
      std::cout << " _________" << "\n"
                << "|  _      |" << "\n"
                << "| |_|_    |" << "\n"
                << "|   |_|_  |" << "\n"
                << "|     |_| |" << "\n"
                << "|_________|" << "\n";
      break;
    case 4:
      std::cout << " _________" << "\n"
                << "|  _   _  |" << "\n"
                << "| |_| |_| |" << "\n"
                << "|  _   _  |" << "\n"
                << "| |_| |_| |" << "\n"
                << "|_________|" << "\n";
      break;
    case 5:
      std::cout << " _________" << "\n"
                << "|  _   _  |" << "\n"
                << "| |_|_|_| |" << "\n"
                << "|  _|_|_  |" << "\n"
                << "| |_| |_| |" << "\n"
                << "|_________|" << "\n";
      break;
    case 6:
      std::cout << " _________" << "\n"
                << "|  _   _  |" << "\n"
                << "| |_| |_| |" << "\n"
                << "| |_| |_| |" << "\n"
                << "| |_| |_| |" << "\n"
                << "|_________|" << "\n";
      break;
  }
  return 0;
}

int RNG(std::mt19937 &rng) {;
  std::uniform_int_distribution<int> dist(1, 6);
  return dist(rng);
}