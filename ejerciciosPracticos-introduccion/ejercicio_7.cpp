/*Estructura de Selección switch: Realizar un programa que lea la entrada
estándar de un número entero entre (1 – 5) y muestre la salida estándar del número al
determinar, si el número ingresado se encuentra en el rango permitido o no.*/

#include <iostream>

using namespace std;

int main(){
	
	int num;
	cout << "Ingrese un numero entre el 1-5\n";
	cin >> num;
	
	switch(num){
		case 1:
			cout << "Usted ha elegido el numero "<< num<<"\n";
			break;
		case 2:
			cout << "Usted ha elegido el numero "<< num<<"\n";
			break;
		case 3:
			cout << "Usted ha elegido el numero "<< num<<"\n";
			break;
		case 4:
			cout << "Usted ha elegido el numero "<< num<<"\n";
			break;
		case 5:
			cout << "Usted ha elegido el numero "<< num<<"\n";
			break;
		default:
			cout << "NO eligio un numero en el rango";
	}
	
	return 0;
}