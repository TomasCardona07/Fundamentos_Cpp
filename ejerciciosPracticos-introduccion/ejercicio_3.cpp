/*Estructura de Selección if anidada: Realizar un programa que lea la entrada
estándar de un número entero y muestre la salida estándar al determinar, si el número ingresado
es igual a cero, es par o impar.*/

#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout << "ingrese un numero entero\n";
	cin >> num;
	
	num = num % 2;
	
	if(num == 0){
		cout << "El numero es par";
	}
	else{
		cout << "El numero es impar";
	}
	return 0;
}