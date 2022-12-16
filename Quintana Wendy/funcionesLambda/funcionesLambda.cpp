/* UFA ESPE
Funciones Lambda
ALumno: Quintana Wendy
Fecha creacion: 15-12-2022
Fecha modificacion: 15-12-2022
NRC: 7999
 */

#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

int main() {
    int b = 10;
    int c = 100;
    auto f = [&](int& a) -> int {
        b += 1;
        c +=1;
        return a + b + c;
    };
    int a = 10;
    std::cout << f(a) << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    return 0;
}