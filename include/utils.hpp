#pragma once
#ifdef _WIN32
#include <SDL.h>
#else
#include <SDL2/SDL.h>
#endif

#include <exception>
#include <iostream>
#include <string>

// function to get absolute path, assuming that the executable is under
// ...../bin/ and resources are on ...../res
// ./
//   bin/executable
//   res/

std::string GetResourcePath(const std::string &sub_dir = "");

bool MouseHoverChecker(SDL_Rect & region);
