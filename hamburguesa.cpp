/*
Clase Hamburguesa ----- Restaurante 2.0
Daaniel Medina Mtz----- A01351871
C++
*/

#include<iostream>

using namespace std; 

class Hamburguesa {
private: //Atributos
	string pepinillo;
	string jitomate;
	string lechuga;
	string cebolla;
	string tocino;

public: //Metodos
	Hamburguesa(string, string, string, string, string); //Constructor
	void seleccion();
};

//Constructor
	Hamburguesa::Hamburguesa(string _pepinillo, string _jitomate, string _lechuga, string _cebolla, string _tocino){
		string pepinillo = _pepinillo;
		string jitomate = _jitomate;
		string lechuga = _lechuga;
		string cebolla = _cebolla;
		string tocino = _tocino;
}

//Pedir ingredientes

void Hamburguesa::seleccion() {
	cout << "Desea pepinillos en su hamburguesa? (s/n)"; cin >> pepinillo;
	cout << "Desea jitomate en su hamburguesa? (s/n)"; cin >> jitomate; 
	cout << "Desea lechuga en su hamburguesa? (s/n)"; cin >> lechuga;
	cout << "Desea cebolla en su hamburguesa? (s/n)"; cin >> cebolla;
	cout << "Desea tocino en su hamburguesa? (s/n)"; cin >> tocino;

	cout << "Su hamburguesa iria acompañada de: \n";

	if (pepinillo == "s") {
		cout << "\npepinillo";
	}

	if (jitomate == "s") {
		cout << "\njitomate";
	}

	if (lechuga == "s") {
		cout << "\nlechuga";
	}

	if (cebolla == "s") {
		cout << "\ncebolla";
	}

	if (tocino == "s") {
		cout << "\ntocino\n";
	}
}


//Pruebas

int main() {
	Hamburguesa h1 = Hamburguesa("s", "s", "s", "s", "s");
	h1.seleccion();
}