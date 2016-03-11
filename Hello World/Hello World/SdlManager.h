#pragma once

#include <SDL.h>

class SdlManager
{
public:
  SdlManager();
  ~SdlManager();

  void Init();

private:
  const int SCREEN_WIDTH = 1280;
  const int SCREEN_HEIGHT = 720;

  SDL_Window*  window_  = nullptr;
  SDL_Surface* surface_ = nullptr;
};

