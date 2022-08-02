#pragma once

#include <map>
#include <string>

#include "imgui.h"

ImVec4 ImGuiColorFromHexString(std::string s);
void LoadThemeFromMap(std::map<std::string, unsigned int> m);