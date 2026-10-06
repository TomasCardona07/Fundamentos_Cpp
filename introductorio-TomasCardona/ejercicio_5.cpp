#include <iostream>
#include <string>

using namespace std;
int main(){
	int codigo;
	string nombre;
	int edad;
	float altura;
	
	cout << "Ingrese el codigo\n"; cin >> codigo;
	cout << "Ingrese el nombre\n"; cin >> nombre;
	cout << "Ingrese el edad\n"; cin >> edad;
	cout << "Ingrese el altura\n"; cin >> altura;
	
	cout << "codigo: " << codigo<< "\n";
	cout << "nombre: " << nombre<< "\n";
	cout << "edad: " << edad<< "\n";
	cout << "altura: " << altura<< "\n";
}