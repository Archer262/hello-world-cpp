//my first program in C++
#include "stdafx.h"
#include <iostream>

#include <SDL.h>

const int SCREEN_WIDTH  = 1280;
const int SCREEN_HEIGHT = 720;

int main(int argc, char* args[])
{
  // Our SDL pointers
  SDL_Window*  window  = nullptr;
  SDL_Surface* surface = nullptr;

  // Initialize SDL
  if( SDL_Init(SDL_INIT_VIDEO) < 0 )
  {
    printf("Error initializing SDL: %s\n", SDL_GetError());
    return 0;
  }

  //Create window
  window = SDL_CreateWindow("Hello World", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
  if( window == NULL )
  {
    printf("Error creating window: %s\n", SDL_GetError());
    return 0;
  }

  // Get surface
  surface = SDL_GetWindowSurface(window);

  // Paint white
  SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0xFF, 0xFF, 0xFF));

  // Update the surface
  SDL_UpdateWindowSurface(window);

  // Wait two seconds
  SDL_Delay(2000);

  //Destroy window
  SDL_DestroyWindow(window);

  //Quit SDL subsystems
  SDL_Quit();

  return 0;
}
