//my first program in C++
#include "stdafx.h"
#include <iostream>

#include "SdlManager.h"

int main(int argc, char* args[])
{
  SdlManager sdlManager;
  sdlManager.Init();

  // Wait two seconds
  SDL_Delay(2000);

  return 0;
}
