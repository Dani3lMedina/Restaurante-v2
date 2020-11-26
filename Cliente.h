#include<Persona.h>
#include<iostream>

using namespace std;

//clase hija de persona 
class Cliente {
    public: 
        Cliente(string, string);
        void registro();
};

//Constructor de la clase hija
Cliente::Cliente(string _USER, string _PASS){
    string USER = _USER;
    string PASS = _PASS;
}

//Registro
void registro(){
    string USER, PASS;

    cout<<"\t\tREGISTRO DE USUARIO"<<endl; 
    cout<<"\t\t\t-----------------"<<endl; 
    cout<<"\n\tIngresa tu Usuario: "<<endl;
    getline(cin, USER);
    cout<<"\n\tIngresa tu Contraseña : "<<endl; 
    getline(cin, PASS);
}