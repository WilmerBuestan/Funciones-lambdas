#include<iostream>
#include<conio.h>
#include<functional>

using namespace std;

/*

template<class T>
T Suma(T a, T b){
	return a+b;
}

template<class T>
T Resta(T a, T b){
	return a-b;
}

template<class T>
T Multiplicacion(T a, T b){
	return a*b;
}
*/

template<class T>
T Operacion(T a, T b,function<T(T,T)>oper){
	return oper(a,b);
}




