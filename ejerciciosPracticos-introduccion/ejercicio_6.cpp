/*Estructura de Selección if doble: Realizar un programa que lea consecutivamente
la entrada estándar de tres números enteros, posterior mente se deberá pedir la entrada de un
cuarto número entero y muestre la salida estándar al determinar, si el cuarto número leído
coincide con al menos uno de los tres primeros números leídos.*/

#include <iostream>
using namespace std;

int main(){
	int num1;
	int num2;
	int num3;
	int num4;
	
	cout << "Ingrese el valor del primer numero\n";
	cin >> num1;
	cout << "Ingrese el valor del segundo numero\n";
	cin >> num2;
	cout << "Ingrese el valor del tercer numero\n";
	cin >> num3;
	cout << "Ingrese el valor del cuarto numero\n";
	cin >> num4;
	
	if(num4 == num1){
		cout << "EL 4 numero es igual al primero";
	}
	else if(num4 == num2){
		cout << "EL 4 numero es igual al segundo";
	}
	else if(num4 == num3){
		cout << "EL 4 numero es igual al tercero";
	}
	else{
		cout << "EL 4 numero no coincide con ninguno";
	}
	return 0;
}