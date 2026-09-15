/*Estructura de Selección if anidada: Realizar un programa que lea la entrada
estándar de un número entero y muestre la salida estándar al determinar, si el número ingresado
es igual a cero, es positivo o negativo.*/

#include <iostream>

using namespace std;

int main(){
	int num;
	cout << "Ingrese el numero\n";
	cin >> num;
	
	if(num == 0){
		cout << "El numero es 0";
	}
	else if(num > 0){
		cout << "El numero es positivo";
	}
	else{
		cout << "El numero es negativo";
	}
	return 0;
}