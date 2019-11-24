#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include "persona.h"

using namespace std;
class Medico : public Persona {
	string medico, contra , especialidad ;
	int cant;
public:
	Medico() : Persona() {
		cout << "Medico: ";
		getline(cin, medico);
		cout << "Contrasena: ";
		getline(cin, contra);
		cout << "Cantidad de horas disponibles: ";
		cin >> cant;
		cout << "Especialidad: "
		getline(cin, especialidad);

	}	
		
	string getMedico() { return medico; }
	string getContra() { return contra; }
	string getEspecialidad(){return especialidad; }

};
#endif //MEDICO_H
