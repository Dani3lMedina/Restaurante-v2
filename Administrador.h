#include<Persona.h>
#include<iostream>

using namespace std;

//Clase hija de persona 
class Administrador{
    public: 
        Administrador(string, string);
        void set_admin();
};

//Constructor de la clase hija
Administrador::Administrador(string _USER, string _PASS){
    string USER = _USER;
    string PASS = _PASS;
}

void set_admin(){
    string USER, PASS;
    USER = "Admin";
    PASS = "1234";
}