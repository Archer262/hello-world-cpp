#include "stdafx.h"
#include "SdlManager.h"

SdlManager::SdlManager()
{
  window_  = nullptr;
  surface_ = nullptr;
}

SdlManager::~SdlManager()
{
  //Destroy window
  SDL_DestroyWindow(window_);

  //Quit SDL subsystems
  SDL_Quit();
}

void SdlManager::Init()
{
  // Initialize SDL
  if( SDL_Init(SDL_INIT_VIDEO) < 0 )
  {
    printf("Error initializing SDL: %s\n", SDL_GetError());
    return;
  }

  //Create window
  window_ = SDL_CreateWindow("Hello World", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
  if( window_ == NULL )
  {
    printf("Error creating window: %s\n", SDL_GetError());
    return;
  }

  // Get surface
  surface_ = SDL_GetWindowSurface(window_);

  // Paint white
  SDL_FillRect(surface_, NULL, SDL_MapRGB(surface_->format, 0xFF, 0xFF, 0xFF));

  // Update the surface
  SDL_UpdateWindowSurface(window_);
}