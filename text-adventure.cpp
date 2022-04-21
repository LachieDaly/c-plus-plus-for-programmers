// Build a Text Adventure
// Choose your own HORROR!!
// Taking from https://www.buzzfeed.com/austin137/can-you-survive-this-choose-your-own-adventure-horror-story

#include <iostream>

int main() {
  // Intro
  std::cout << "You're walking through the woods at night, and everything's pitch black\n";
  std::cout << "except for the flashlight on your phone. Before you, there's a path that leads\n";
  std::cout << "you deeper into the woods where your friend's cabin awaits. You've been\n";
  std::cout << "there before but never at nighttime.\n";

  char choice1;
  for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B'; i++) {
    std::cout << "Enter A to keep walking.\n";
    std::cout << "Enter B to call your friend.\n";
    std::cin >> choice1;
  }

  switch(choice1) {
    case 'A':
      std::cout << "You decide to keep walking. The faster you get to the cabin, the better. As\n";
      std::cout << "you walk, you listen to the sound of the crickets and the wind rustling\n";
      std::cout << "through the trees. You get to a fork in the path and can't quite remember\n";
      std::cout << "which way to go.\n";
      break;
    case 'B':
      break;
    default:
      std::cout << "Sorry, you haven't entered a valid choice. You Died!\n";

    return 0;
  }
}

void keepWalking() {

}