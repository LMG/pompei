#include "Screen.h"

Screen::Screen(std::string windowName)
{
  screen = NULL;
  SDL_Init(SDL_INIT_VIDEO);

  screen = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);
  SDL_WM_SetCaption(windowName.c_str(), NULL);
}

Screen::~Screen()
{
  SDL_Quit();
}
