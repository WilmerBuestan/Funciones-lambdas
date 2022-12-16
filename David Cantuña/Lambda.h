#pragma once

#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
#include <string_view>
#include <array>

class Lambda {
private:
	std::array<std::string, 4> arr{ "amarillo", "morado", "verde", "gris" };
public:
	void encontrado(std::array<std::string, 4>, std::string color);
};