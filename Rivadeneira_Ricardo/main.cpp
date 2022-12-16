/*
	UFA-ESPE
	Nombre: Ricardo Rivadeneira
	Fecha de creación: 14/12/2022
	Fecha de modificación: 16/12/2022
	Enunciado: Realizar un ejemplo de funciones lambda.
	Nivel.- 3   NRC: 7999
*/

#include "Cfunciones.cpp"
#include <iostream> 
Cfunciones arr;
using namespace std; 

void radixsort() 
{ 
    auto maximo = [&] (){ //auto: El compilador sabe el tipo de dato, y lo infiere por nosotros.
	    int mx = *(arr.getDato(0)); 
    	for (int i = 1; i < arr.size(); i++) 
        if (*(arr.getDato(i)) > mx) 
        mx = *(arr.getDato(i)); 
    	return mx;
	};
	
    int m = maximo(); 
  	auto Sort = [&] (int exp){	
	    Cfunciones salida,contador; 
	    for (int i = 0; i < 10; i++){	        	
	        contador.insertar(0);
		}
		for (int i = 0; i < arr.size(); i++){	        	
	        salida.insertar(0);
		} 		  
		for (int i = 0; i < arr.size(); i++){		
		    *(contador.getDato((*(arr.getDato(i)) / exp) % 10))=*(contador.getDato((*(arr.getDato(i)) / exp) % 10))+1;
		}		  
		for (int i = 1; i < 10; i++) {		    	
		    *(contador.getDato(i)) += *(contador.getDato(i-1)); 
		}
		for (int i = arr.size()-1; i >= 0; i--) {
			*(salida.getDato(*(contador.getDato((*(arr.getDato(i))/exp)%10))-1))=*(arr.getDato(i)) ;				
			*(contador.getDato((*(arr.getDato(i)) / exp) % 10))=*(contador.getDato((*(arr.getDato(i)) / exp) % 10))-1;		
		}   
		for (int i = 0; i < arr.size(); i++){
			*(arr.getDato(i)) = *(salida.getDato(i)); 
		}	        
	};
    
    for (int exp = 1; m / exp > 0; exp *= 10) 
        Sort(exp); 
} 
  

void imprimir() 
{ 
    for (int i = 0; i <arr.size(); i++) 
        cout << *(arr.getDato(i)) << " "; 
} 
  
int main() 
{ 
	char dato1[10];
    int valor = 0;
	system("cls");
	std::cout<<"Ordenamiento de Datos"<<endl;
	do {
        strcpy(dato1,arr.ingresarDatosEnteros("\n>Ingrese un valor al arreglo: "));
		valor=atoi(dato1);
		arr.insertar(valor);
    } while (arr.confirmar("\n>Desea agregar otro numero?"));
    std::cout<<"\n>Lista Desordenada"<<endl;
    imprimir();
    std::cout<<"\n>Lista ordenada"<<endl;
    radixsort(); 
    imprimir(); 
    return 0; 
}
