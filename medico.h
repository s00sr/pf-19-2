#include <string>
#include "persona.h"
#ifndef Medico_H_ICLUDED
#define Medico_H_ICLUDED
using namespace std;
class Medico : public Persona {
	string medico, contra;
	int* arr, cant;
public:
	Medico() : Persona() {
		cout << "Medico: ";
		getline(cin, medico);
		cout << "Contrasena: ";
		getline(cin, contra);
		cout << "Cantidad de horas disponibles: ";
		cin >> cant;
		/*
		int arr = new int[cant];
		for (int i = 0; i < cant * 2; i++)
		{
			cout << "Hora de entrada: " << '\t';
			cin >> arr[i];
			cout << "Hora de salida: " << '\t';
			cin >> arr[i+]	                         NO SE QUE MIERDA QUERIAS HACER AQU... MOTTA HVN...
		}
		*/
	string getMedico() { return medico; }
	string getContra() { return contra; }
	void printHor()
	{
		for (int i = 0; i < cant; i++)
			cout << arr[i] << '\t';
	}
};
#endif // Medico_H_INCLUDED