#include <iostream>
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

    std::cout << "\n" << "Press enter to roll or 'q' to quit: ";
    input = std::cin.get();

    if (input != 'q') {
      int randnum = RNG(rng);
      printDice(randnum);
    }

  } while (input != 'q');
  std::cout << "Thanks for playing!";
}
int printDice(int randnum) {

  switch (randnum) {
    case 1:
      std::cout << "   _________ " << "\n"
                << "  /        /|" << "\n"
                << " /________/ |" << "\n"
                << "|         | |" << "\n"
                << "|    _    | |" << "\n"
                << "|   |_|   | /" << "\n"
                << "|         |/ " << "\n"
                << "|_________/  " << "\n";
      break;
    case 2:
      std::cout << "   _________ " << "\n"
                << "  /        /|" << "\n"
                << " /________/ |" << "\n"
                << "|  _      | |" << "\n"
                << "| |_|     | |" << "\n"
                << "|      _  | /" << "\n"
                << "|     |_| |/ " << "\n"
                << "|_________/  " << "\n";
      break;
    case 3:
      std::cout << "   _________ " << "\n"
                << "  /        /|" << "\n"
                << " /________/ |" << "\n"
                << "|  _      | |" << "\n"
                << "| |_|_    | |" << "\n"
                << "|   |_|_  | /" << "\n"
                << "|     |_| |/ " << "\n"
                << "|_________/  " << "\n";
      break;
    case 4:
      std::cout << "   _________ " << "\n"
                << "  /        /|" << "\n"
                << " /________/ |" << "\n"
                << "|  _   _  | |" << "\n"
                << "| |_| |_| | |" << "\n"
                << "|  _   _  | /" << "\n"
                << "| |_| |_| |/ " << "\n"
                << "|_________/  " << "\n";
      break;
    case 5:
      std::cout << "   _________ " << "\n"
                << "  /        /|" << "\n"
                << " /________/ |" << "\n"
                << "|  _   _  | |" << "\n"
                << "| |_|_|_| | |" << "\n"
                << "|  _|_|_  | /" << "\n"
                << "| |_| |_| |/ " << "\n"
                << "|_________/  " << "\n";
      break;
    case 6:
      std::cout << "   _________ " << "\n"
                << "  /        /|" << "\n"
                << " /________/ |" << "\n"
                << "|  _   _  | |" << "\n"
                << "| |_| |_| | |" << "\n"
                << "| |_| |_| | /" << "\n"
                << "| |_| |_| |/ " << "\n"
                << "|_________/  " << "\n";
      break;
  }
  return 0;
}

int RNG(std::mt19937 &rng) {;
  std::uniform_int_distribution<int> dist(1, 6);
  return dist(rng);;
}

int printTitle() {
  std::cout << "  _____     __     ______     ______        ______     ______     __    __     ______   \n"
            << " /\\  __-.  /\\ \\   /\\  ___\\   /\\  ___\\      /\\  ___\\   /\\  __ \\   /\\ +-./  \\   /\\  ___\\  3D\n"
            << " \\ \\ \\/\\ \\ \\ \\ \\  \\ \\ \\____  \\ \\  __\\      \\ \\ \\__ \\  \\ \\  __ \\  \\ \\ \\-./\\ \\  \\ \\  __\\  \n"
            << "  \\ \\____-  \\ \\_\\  \\ \\_____\\  \\ \\_____\\     \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_\\ \\ \\_\\  \\ \\_____\\ \n"
            << "   \\/____/   \\/_/   \\/_____/   \\/_____/      \\/_____/   \\/_/\\/_/   \\/_/  \\/_/   \\/_____/ \n";
  return 0;
}