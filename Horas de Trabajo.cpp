#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
{



    int Horas, Minutos, Segundos,
        Horas2, Minutos2, Segundos2,
        HorasTotales, MinutosTotales, SegundosTotales;
    char p;//Puntos

	cout << " Ingrese su hora de entrada (HH:MM:SS) en formato 24 hrs:" << endl;
	cin >> Horas >> p >> Minutos  >> p >> Segundos;
	
	if (Horas <= 24)
	{
		if (Minutos <= 60)
		{
			if (Segundos <= 60);
		}
	}
	else 
	{
		cout << " La hora asignada no es correcta: "<< endl;
	}
	
	
	cout << " Ingrese su hora de salida (HH:MM:SS) en formato 24 hrs  " << endl;
	cin >> Horas2 >> p >> Minutos2 >> p >> Segundos2;
		
		if (Horas2 <= 24)
	{
		if (Minutos2 <= 60)
		{
			if (Segundos2 <= 60);
		}
	}
 	else 
	{
		cout << "La hora asignada no es correcta:" << endl;
	}
	if (Horas < Horas2)
	{
		HorasTotales = Horas2 - Horas;
	}
	else
	{
	
	HorasTotales = Horas - Horas2;
	}
	if (Minutos < Minutos2)
	{
		MinutosTotales = Minutos2 - Minutos;
	}
	else 
	{
		MinutosTotales = Minutos - Minutos2;
	}
	if (Segundos < Segundos2)
	{
		SegundosTotales = Segundos2 - Segundos;
	}
	else 
	{
		SegundosTotales = Segundos - Segundos2;
	}
	cout << " Horas trabajadas (HH:MM:SS) :  ";
	if (HorasTotales < 10)
	{
		cout << 0;
	}
	cout << HorasTotales << ":"; 
	if (HorasTotales < 10)
	{
		cout << 0;
	}
	cout << MinutosTotales << ":";
	if (HorasTotales < 10)
	{
		cout << 0;
	}
	cout << SegundosTotales  << endl;
    return 0;
}
