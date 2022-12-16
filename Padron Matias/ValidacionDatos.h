
/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón
FECHA DE CREACIÓN: 15/12/2022
FECHA DE MODIFICACIÓN: 15/12/2022
TareaIndividual_Lamba
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include"LecturaDatos.h"
#pragma once
class ValidacionDatos:public LecturaDatos
{
	public:
		char* lecturaEnteros(char const *msj) override;
		char* lecturaReales(char const *msj) override;
		char* lecturaTexto(char const *msj) override;
		
		int casteoEnteros(char* dato,char const *msj);
		double casteoReales(char* dato, char const *msj);
		
};
