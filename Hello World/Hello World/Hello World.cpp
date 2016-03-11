//my first program in C++

// Always include the precompiled header first
#include "stdafx.h"

// Then include C++ library stuff like this
#include <iostream>

// Finally, include project files that we are referencing in this file
#include "SdlManager.h"

// Avoid polluting the namespace, don't use 'using'!!
//using namespace std;


// Main function, recognized by SDL to be the application entry point
int main(int argc, char* args[])
{
  // rsltnr - here is some sdl stuff i commented out for the time being
//   SdlManager sdlManager;
//   sdlManager.Init();
//   SDL_Delay(2000);

  // Print some cool text
  std::cout << "This cool C++ program brought to you in part by:" << std::endl << std::endl;
  std::cout << "  Archer262, floraline0, and viewers like you." << std::endl;

  // Wait for user input, so the program doesn't end right away
  std::cin.get();

  return 0;
}
