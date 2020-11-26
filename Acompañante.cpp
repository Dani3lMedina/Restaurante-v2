/*
Restaurante 2.0
Clase 2 --------- Acompañantes 
Daniel Medina --- A01351871
*/

#include<iostream>

using namespace std; 

class Acomp {

private: //Atributos
	int papas_fritas;
	int aros_cebolla;
	int nuggets;
	int ensalada;
    int nada;
	

public: //Metodos
	int Constructor(int, int, int, int); //Constructor
	void selection();
};

//Constructor
int Acomp::Constructor(int _papas_fritas, int _aros_cebolla, int _nuggets, int _ensalada, int _nada){

	int papas_fritas = _papas_fritas;
	int aros_cebolla = _aros_cebolla;
    int nuggets = _nuggets;
    int ensalada = _ensalada;
    int nada = _nada;
}
//Pedir ingredientes

void Acomp::selection() {
	
    int select;
    //Menu
    cout<<"\n1. Papas fritas\n";
	cout<<"2. Aros de cebolla\n";
    cout<<"3. Nuggets\n";
    cout<<"4. Ensalada\n";
    cout<<"5. Nada\n";

    cout << "Escoja el numero del acompañante para su hamburguesa: "; cin >> select;

	if (select == 1) {
		cout << "\n Has seleccionado Papas Fritas!";
	}

    if (select == 2) {
		cout << "\n Has seleccionado Aros de cebolla!";
	}

    if (select == 3) {
		cout << "\n Has seleccionado Nuggets de pollo!";
	}

    if (select == 4) {
		cout << "\n Has seleccionado Ensalada!";
	}

    if (select == 5) {
		cout << "\n Has seleccionado una orden sin acompañante!";
	}	
}


//Pruebas

int main() {
	Acomp a1 = Acomp (1,2,3,4,5);
	a1.selection();
}