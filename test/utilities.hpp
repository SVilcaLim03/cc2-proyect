#pragma once

#include <SDL2/SDL.h>

#include <iostream>
#include <string>

/*
 * Get the resource path for resources located in res/subDir
 * It's assumed the project directory is structured like:
 * bin/
 *  the executable
 * res/
 *  Lesson1/
 *  Lesson2/
 *
 * Paths returned will be Lessons/res/subDir
 */
std::string GetResourcePath(const std::string &sub_dir = "") {
  // We need to choose the path separator properly based on which
  // platform we're running on, since Windows uses a different
  // separator than most systems
#ifdef _WIN32
  const char kPathSeparator = '\\';
#else
  const char kPathSeparator = '/';
#endif
  // This will hold the base resource path: Lessons/res/
  // We give it static lifetime so that we'll only need to call
  // SDL_GetBasePath once to get the executable path
  static std::string base_res;
  if (base_res.empty()) {
    // SDL_GetBasePath will return NULL if something went wrong in retrieving
    // the path
    char *base_path = SDL_GetBasePath();
    if (base_path) {
      base_res = base_path;
      SDL_free(base_path);
    } else {
      std::cerr << "Error getting resource path: " << SDL_GetError()
                << std::endl;
      return "";
    }
    // We replace the last bin/ with res/ to get the the resource path
    size_t pos = base_res.rfind("bin");
    base_res = base_res.substr(0, pos) + "res" + kPathSeparator;
  }
  // If we want a specific subdirectory path in the resource directory
  // append it to the base path. This would be something like
  // Lessons/res/Lesson0
  return sub_dir.empty() ? base_res : base_res + sub_dir + kPathSeparator;
}
