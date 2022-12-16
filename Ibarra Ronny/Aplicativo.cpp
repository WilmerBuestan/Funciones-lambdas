#include<iostream>
#include<conio.h>
#include<functional>
#include"Lambda.cpp"

int main()
{	
	int opcion;
	int datoA, datoB; 
	int resultado;
	float division;
	bool repetir = true;
    
    do {
        system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
          switch (opcion) {
            case 1:
              cout<<"Ingrese el primer dato"<<endl;
              cin>> datoA;


              cout<<"Ingrese el segundo dato"<<endl;
              cin>> datoB;
              resultado = Operacion<int>(datoA,datoB, [](int a, int b){return a + b;}) ;
              cout << "El resultado es: " <<resultado<< endl;

              
                system("pause>nul"); // Pausa
                break;
                
            case 2:
              cout<<"Ingrese el primer dato"<<endl;
              cin>> datoA;


              cout<<"Ingrese el segundo dato"<<endl;
              cin>> datoB;
              resultado=Operacion<int>(datoA,datoB, [](int a, int b){return a - b;}) ;
              cout << "El resultado es: " <<resultado<< endl;             
                
                system("pause>nul"); // Pausa
                break;
                
            case 3:
              cout<<"Ingrese el primer dato"<<endl;
              cin>> datoA;


              cout<<"Ingrese el segundo dato"<<endl;
              cin>> datoB;
              resultado=Operacion<int>(datoA,datoB, [](int a, int b){return a * b;});
              cout << "El resultado es: " <<resultado<< endl; 
                              
                
                system("pause>nul"); // Pausa            
                break;
                
            case 4:
              cout<<"Ingrese el primer dato"<<endl;
              cin>> datoA;


              cout<<"Ingrese el segundo dato"<<endl;
              cin>> datoB;
              division=Operacion<float>(datoA,datoB,[](float a, float b){return a *1.0 / b;});
              cout << "El resultado es: " <<division<< endl;           
              
                system("pause>nul"); // Pausa                
                break;
            
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
    
}

