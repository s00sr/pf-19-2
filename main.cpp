#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include "time.h"
#include "usuario.h"
#include "persona.h"
#include "medico.h"
#include "paciente.h"


using namespace std;

void agregarUsuario( void ){

    ostringstream aux;
    string text;
    Usuario x;

    aux << x.getApellido() << "***" << x.getNombre() << "***" << x.getDni() << "***" << x.getUsuario() << "***" << x.getContra() ;

    text = aux.str();

    ofstream archivo;

    archivo.open("usuarios.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<endl;

    archivo<< text;

    archivo.close();
}

void agregarPaciente(void){

    ostringstream aux;
    string text;
    Usuario x;

    Paciente tem();

    aux << tem.getApellido() << "___" << tem.getNombre() << "___" << tem.getDni() << "___" << tem.getRegistro()  << "*****" ;

    text = aux.str();

    ofstream archivo;

    archivo.open("pacientes.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<endl;

    archivo<< text;

    archivo.close();

}

void agregarMedico(void){

    ostringstream aux;
    string text;
    Usuario x;

    Medico tem();

    aux << tem.getApellido() << "___" << tem.getNombre() << "___" << tem.getDni() << "___" << tem.getRegistro()  << "*****" ;

    text = aux.str();

    ofstream archivo;

    archivo.open("medicos.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<endl;

    archivo<< text;

    archivo.close();

}

void agregarEnfermeros(void){

    ostringstream aux;
    string text;
    Usuario x;

    Enfermeros tem();

    aux << tem.getApellido() << "___" << tem.getNombre() << "___" << tem.getDni() << "___" << tem.getRegistro()  << "*****" ;

    text = aux.str();

    ofstream archivo;

    archivo.open("enfermeros.txt",ios::app);
    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<endl;

    archivo<< text;

    archivo.close();

}



void confirmar( string usuario , string contra ){

    ifstream archivo;
    string texto;

    archivo.open("usuarios.txt",ios::in);

    if (archivo.fail())
        std::cout<<"No se puedo abrir el archivo"<<endl;

    string tem;
    while (getline(archivo,tem))
        texto +=tem;

    cout << texto << '\n';

}


void inicio(void){
    int num;
    std::cout << '\n' << "      1    INGRESAR COMO ASISTENTE         ";
    std::cout << '\n' << "      2    INGRESAR COMO MEDICO           ";
    std::cout << '\n' << "      3    INGRESAR COMO ENFERMERO         ";
    std::cout << '\n' << "      1    INGRESAR COMO PACIENTE        ";
    std::cout << '\n' << "      0    SALIR                  " << '\n';
    std::cout << '\n' << "DIGITE NUMERO: " ; std::cin >> num;
    if ( num == 1){
        std::string usuario , contra;
        system("clear");
        std::cin.ignore();
        std::cout << '\n' << "      USUARIO : ";
        std::getline (std::cin , usuario);
        std::cout << "      CONTRASEÑA : ";
        std::getline (std::cin, contra);
        confirmar( usuario , contra );

    }else if ( num == 2){

    }else if ( num == 3){

    }else if ( num == 0){

    }else{
        std::cout << "DIGITE EN EL RANGO DE NUMEROS" <<'\n';
        num = 100;
        system("clear");
        inicio();
    }
}

int main(){

    inicio();

    return 0;
}
