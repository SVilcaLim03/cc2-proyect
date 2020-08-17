#include "utils.hpp"

std::string GetResourcePath(const std::string &sub_dir) {
#ifdef _WIN32
  const char kPathSeparator = '\\';
#else
  const char kPathSeparator = '/';
#endif

  static std::string base_res;
  if (base_res.empty()) {
    // SDL_GetBasePath will return NULL if something went wrong in retrieving
    // the path
    char *base_path = SDL_GetBasePath();
    if (base_path != nullptr) {
      base_res = base_path;
      SDL_free(base_path);
    } else {
      throw std::runtime_error(SDL_GetError());
    }
    // We replace the last bin/ with res/ to get the the resource path
    size_t pos = base_res.rfind("build");
    base_res = base_res.substr(0, pos) + "res" + kPathSeparator;
  }
  // If we want a specific subdirectory path in the resource directory
  // append it to the base path. This would be something like
  return sub_dir.empty() ? base_res : base_res + sub_dir + kPathSeparator;
}
bool MouseHoverChecker(SDL_Rect region, std::pair<int, int> mouse_pos) {
  bool on_x = region.x <= mouse_pos.first && mouse_pos.first <= region.x + region.w;
  bool on_y = region.y <= mouse_pos.second && mouse_pos.second <= region.y + region.h;
  return (on_x && on_y);
}
