/***********************************************************************
 * Module:  operaciones.h
 * Author:  Jeimy
 * Modified: jueves, 15 de diciembre de 2022 19:54:05
 * Purpose: Declaration of the class operaciones
 ***********************************************************************/

#if !defined(__Class_Diagram_1_operaciones_h)
#define __Class_Diagram_1_operaciones_h

class operaciones
{
public:
   int getNum1(void);
   void setNum1(int newNum1);
   int getNum2(void);
   void setNum2(int newNum2);
   operaciones(int numero1, int numero2);
   ~operaciones();
   void ingresar(operaciones *obj);
   int mcm(int num1,int num2);
   int divicion(void);

protected:
private:
   int num1;
   int num2;


};

#endif
