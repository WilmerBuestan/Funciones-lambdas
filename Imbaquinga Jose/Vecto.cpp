#include <iostream>
#include <functional>
#include <vector>
/***********************************************************************
 * Module: Vecto.cpp
 * Author:  Jose Imbaquinga
 * Modified: jueves, 15 de diciembre de 2022 19:54:05
 * Purpose: Implementation of the class operaciones
 ***********************************************************************/
void forEach(std::vector<int> const & vec, std::function<void (int)> const & op){
    for(auto elem:vec){
        op(elem);
    }
}

int main()
{

    std::vector<int> myVector{1,2,3,4,5,6,8,10,11,12,14};
    std::vector<int> externalVector;

    forEach(myVector, [&](int e){
        if(e % 2 == 0) externalVector.push_back(e);
    }); // externalVector = { 2, 4, 6 }

    forEach(externalVector, [](int e){
        std::cout << e << "-";
    }); // -> 2 4 6

    return 0;
}