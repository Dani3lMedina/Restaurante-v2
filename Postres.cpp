/*
Restaurante 2.0
Clase 2 --------- Acompañantes 
Daniel Medina --- A01351871
*/

#include<iostream>

using namespace std; 

class Postre {

private: //Atributos
	int helado_fresa;
	int helado_chocolate;
	int flan;
	int galleta;
    int nada;
	

public: //Metodos
	Postre(int, int, int, int); //Constructor
	void selection();
};

//Constructor
	Postre::Postre (int _helado_fresa, int _helado_chocolate, int _flan, int _galleta, int _nada){

		int papas_fritas = _helado_fresa;
		int aros_cebolla = _helado_chocolate;
        int nuggets = _flan;
        int ensalada = _galleta;
        int nada = _nada;
    }
//Pedir ingredientes

void Postre::selection() {
	
    int select;
    //Menu
    cout<<"\n1. Helado de fresa\n";
	cout<<"2. Helado de chocolate\n";
    cout<<"3. Flan de chocolate\n";
    cout<<"4. Galleta con chispas de chocolate\n";
    cout<<"5. Nada\n";

    cout << "Escoja el numero del postre para su orden: "; cin >> select;

	if (select == 1) {
		cout << "\n Has seleccionado Helado de fresa!";
	}

    if (select == 2) {
		cout << "\n Has seleccionado Helado de chocolate!";
	}

    if (select == 3) {
		cout << "\n Has seleccionado Flan de chocolate!";
	}

    if (select == 4) {
		cout << "\n Has seleccionado Galleta con chispas de chocolate!";
	}

    if (select == 5) {
		cout << "\n Has seleccionado una orden sin postre!";
	}	
}


//Pruebas

int main() {
	Acomp a1 = Acomp (1,2,3,4,5);
	a1.selection();
}