#include <iostream>
#include<string>

using namespace std; 

//Clase padre
class Persona {
    private: 
        string usuario;
        string password;
        string USER;
        string PASS;
    public:
        Persona(string, string, string, string);
        void login();
};

//Constructor clase padre
Persona::Persona(string _usuario, string _password, string _USER, string _PASS){
    string usuario = _usuario; 
    string password = _password;
    string USER = _USER;
    string PASS = _PASS;
}

//Login
void login(){
    string usuario, password, USER, PASS;
    bool ingresa = false;

    do{
    cout<<"\t\tLOGIN DE USUARIO"<<endl; 
    cout<<"\t\t\t-----------------"<<endl; 
    cout<<"\n\tUsuario: "<<endl;
    getline(cin, usuario);
    cout<<"\n\tContraseña : "<<endl; 
    getline(cin, password);
    if (usuario == USER && password == PASS){
        ingresa = true;
        cout<<"Correcto";
    }
    }while (ingresa == false);
}


int main(){
    login();
    return 0;
}