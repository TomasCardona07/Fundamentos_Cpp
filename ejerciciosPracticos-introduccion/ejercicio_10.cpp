#include <iostream>
#include <string>

using namespace std;
int main(){
	string codigo;
	string nombre;
	float notaTeorica;
	float notaPractica;
	float notaParticipacion;
	float notaFinal;
	
	cout << "ingrese el codigo del alumno \n",
	cin >> codigo;
	cout << "Ingrese el nombre del alumno\n",
	cin >> nombre;
	
	cout << "Ingrese la nota teorica\n";
	cin >> notaTeorica;
	
	cout << "Ingrese la nota practica\n";
	cin >> notaPractica;

	cout << "Ingrese la nota de participacion\n";
	cin >> notaParticipacion;
	
	notaTeorica = notaTeorica * 0.30;
	notaPractica = notaPractica * 0.50;
	notaParticipacion = notaParticipacion * 0.20;
	
	notaFinal = notaTeorica + notaPractica + notaParticipacion;
	
	cout << "Nombre del alumno: "<< nombre<< "\n";
	cout << "codigo del alumno: "<< codigo<< "\n";
	cout << "Nota final del alumno: "<< notaFinal;
	
	return 0;
}