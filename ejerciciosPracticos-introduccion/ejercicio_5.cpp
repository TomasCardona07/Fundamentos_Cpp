/*Estructura de Selección if doble: Realizar un programa que lea de manera
estándar la edad de un usuario y muestre la salida estándar al determinar, si la edad se encuentra
entre el rango de 18 a 25.*/

#include <iostream>

using namespace std;

int main(){
	int edad;
	
	cout << "Ingrese la edad \n";
	cin >> edad;
	
	bool seEncuentra = false;
	if(edad <= 25){
		if(edad >= 18){
			cout << "La edad esta entre 18-25";
			seEncuentra = true;
		}
	}
	if(!seEncuentra){
		cout << "la edad no se encuentra en el rango";
	}
	return 0;
}