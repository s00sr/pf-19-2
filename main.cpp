#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include "persona.h"
#include "usuario.h"

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
    std::cout << '\n' << "      1    INGRESAR COMO A       ";
    std::cout << '\n' << "      1    INGRESAR COMO B       ";
    std::cout << '\n' << "      1    INGRESAR COMO C       ";
    std::cout << '\n' << "      1    INGRESAR COMO D       ";
    std::cout << '\n' << "      0    SALIR                  " << '\n';
    std::cout << '\n' << "DIGITE NUMERO: " ; std::cin >> num;
    if ( num == 1){
        std::string usuario , contra;
        system("CLS");
        std::cin.ignore();
        std::cout << '\n' << "      USUARIO : ";
        std::getline (std::cin , usuario);
        std::cout << "      CONTRASE�A : ";
        std::getline (std::cin, contra);
        confirmar( usuario , contra );

    }else if ( num == 2){

    }else if ( num == 3){

    }else if ( num == 0){

    }else{
        std::cout << "DIGITE EN EL RANGO DE NUMEROS" <<'\n';
        num = 100;
        system("CLS");
        inicio();
    }

}

int main(){

    //inicio();
    //confirmar("a" , "b");
    agregarUsuario();
    //Usuario x;
    //Persona y;
    return 0;
}
