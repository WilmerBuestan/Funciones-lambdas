#include "Funciones.hpp"
#include "Validacion.hpp"

int main(int argc, char const *argv[])
{
    Validacion val;
    Funciones fun;
    cout<<"Ingrese el primer numero: "<<endl;
    fun.setNumeroA(val.charToInt());
    cout<<"Ingrese el segundo numero: "<<endl;
    fun.setNumeroB(val.charToInt());
    cout<<endl<<"La suma es: ";
    cout<<fun.suma()<<endl;
    cout<<endl<<"La resta es: ";
    cout<<fun.resta()<<endl;
    cout<<endl<<"La multiplicacion es: ";
    cout<<endl<<fun.multiplicacion();
    cout<<endl<<"La division es: ";
    cout<<fun.division()<<endl;
    
    
    return 0;
}
