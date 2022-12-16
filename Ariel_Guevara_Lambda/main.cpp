/**
 * @file main.cpp
 * Universidad de las Fuerzas Armadas ESPE
 * @author Ariel guevara
 * @brief 
 * @version 0.1
 * @date 2022-12-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <conio.h> 

class Estudiante{
    private: 
        std::string m_nombre{};
        int m_edad{};
        float m_peso{};
    public:
        Estudiante(std::string nombre,int edad, float peso): m_nombre{nombre},
        m_edad{edad},m_peso{peso} {}
        
        const std::string getNombre()const{
            return m_nombre;
        }
        const int getEdad()const{
            return m_edad;
        }
        const float getPeso()const{
            return m_peso;
        }

        void setNombre(const std::string& nombre){
            m_nombre = nombre;
        }
        void setEdad(const int& edad){
            m_edad = edad;
        }
        void setPeso(const float& peso){
            m_peso = peso;
        }
};  

void imprimirVector(const std::vector<Estudiante>& vect){
        for (const auto& estudiante : vect){
            std::cout<< estudiante.getNombre() << " - edad: " << estudiante.getEdad()
            << " - peso: " << estudiante.getPeso() << std::endl;
        }
}
/**
 * @brief Ordena un vector de menor a mayor a partir del criterio que se le envie
 * 
 * @param vect // vector de estudiantes
 * @param criterio // funcion lambda
 */
void ordenar(std::vector<Estudiante>& vect, bool(*criterio)(Estudiante lhs, Estudiante rhs)){
    for(std::size_t i{}; i<vect.size();++i){
        for(std::size_t j{}; j<vect.size(); ++j){
            if(criterio(vect[i],vect[j])){
                Estudiante aux{vect[i]};
                vect[i] = vect[j];
                vect[j] = aux;
            }
        }
    }
}

int main(){
    std::vector<Estudiante> estudiantes{
        {"Carlos",17,49.5},
        {"Juan",19,60.2},
        {"Maria",20,52.6},
        {"Peter",18,39.5},
        {"Sol",23,65.2},
        {"Carla",22,58.6}
    };
    std::cout<<"**************** Menor a Mayor Edad*****************"<< std::endl;
    //llamada a la funcion lambda como parametro
    ordenar(estudiantes, [](Estudiante lhs, Estudiante rhs)->bool{ return lhs.getEdad() < rhs.getEdad(); }); //Ordenamos de menor a mayor
    imprimirVector(estudiantes);

    std::cout<<"**************** Menor a Mayor Peso*****************"<< std::endl;
    //llamada a la funcion lambda como parametro
    ordenar(estudiantes, [](Estudiante lhs, Estudiante rhs)->bool{ return lhs.getPeso() < rhs.getPeso(); }); //Ordenamos de menor a mayor
    
    imprimirVector(estudiantes);
    

    std::cout<<"**************** Mayor a menor Edad*****************"<< std::endl;
    //llamada a la funcion lambda como parametro
    ordenar(estudiantes, [](Estudiante lhs, Estudiante rhs)->bool{ return lhs.getEdad() > rhs.getEdad(); }); //Ordenamos de mayor a menor
    imprimirVector(estudiantes);

    std::cout<<"**************** Mayor a menor Peso*****************"<< std::endl;
    //llamada a la funcion lambda como parametro
    ordenar(estudiantes, [](Estudiante lhs, Estudiante rhs)->bool{ return lhs.getPeso() > rhs.getPeso(); }); //Ordenamos de mayor a menor
    
    imprimirVector(estudiantes);

    return 0;
}