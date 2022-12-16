#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

int main()
{
    constexpr std::array<std::string_view, 4> arr{ "amarillo", "naranja", "verde", "rojo" };

    // Definimos la función justo donde la usamos.
    const auto encontrado{ std::find_if(arr.begin(), arr.end(),
                             [](std::string_view str) // esta es nuestra lambda, sin cláusula de captura
                             {
                               return (str.find("ver") != std::string_view::npos);
                             }) };

    if (encontrado == arr.end())
    {
        std::cout << "No se encontró ver\n";
    }
    else
    {
        std::cout << "Encontrado en:  " << *encontrado << '\n';
    }

    return 0;
}






