/***********************************************************************
 * Module:  OperacionesResMul.h
 * Author:  camilo
 * Modified: jueves, 15 de diciembre de 2022 19:57:05
 * Purpose: Declaration of the class OperacionesResMul
 ***********************************************************************/

#if !defined(__Class_Diagram_1_OperacionesResMul_h)
#define __Class_Diagram_1_OperacionesResMul_h

class OperacionesResMul
{
public:
   double getA(void);
   void setA(double newA);
   double getB(void);
   void setB(double newB);
   OperacionesResMul(double,double);
   ~OperacionesResMul();
   void insertar(OperacionesResMul *obj);
   double calcularHipotenusa(double,double);

protected:
private:
   double a;
   double b;


};

#endif