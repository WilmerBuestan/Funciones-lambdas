#include "Lambda.h"

void Lambda::encontrado(std::array<std::string, 4> arr, std::string color){
    auto encontrado{ std::find_if(arr.begin(), arr.end(), [&](std::string str) {
         return (str.find(color) != std::string::npos);
     }) };

    if (encontrado == arr.end()) {
        std::cout << "Elemento no encontrado" << std::endl;
    }
    else {
        std::cout << "Elemento " << *encontrado << " encontrado." << std::endl;
    }
}
