#include <iostream>

using namespace std;
int main(){
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
	float resultado;
	
	int eleccion;
	cout <<"Ingrese el ejercicio que desea realizar\n";
	cin >> eleccion;
	switch(eleccion){
		case 1:
			cout << "Ingrese el valor de A\n";
			cin >> a;
			cout << "Ingrese el valor de B \n";
			cin >> b;
			
			resultado = (a / b) + 1;
			
			cout << "El resultado de la operacion es: " << resultado;
			break;
		case 2:
			cout << "Ingrese el valor de A\n";
			cin >> a;
			
			cout << "Ingrese el valor de B \n";
			cin >> b;
			
			cout << "Ingrese el valor de C\n";
			cin >> c;
			
			cout << "Ingrese el valor de D \n";
			cin >> d;
			
			resultado = (a + b) / (c + d);
			cout << "El resultado de la operacion es: " << resultado;
			break;
			
		case 3:
			cout << "Ingrese el valor de A\n";
			cin >> a;
			
			cout << "Ingrese el valor de B \n";
			cin >> b;
			
			cout << "Ingrese el valor de C\n";
			cin >> c;
			
			cout << "Ingrese el valor de D \n";
			cin >> d;
			
			cout << "Ingrese el valor de E\n";
			cin >> e;
			
			cout << "Ingrese el valor de F \n";
			cin >> f;
			resultado = (a + (b / c)) / (d + (e / f));
			cout << "El resultado de la operacion es: " << resultado;
			break;
			
		default:
			cout << "No eligio bien";
			break;
	}
	return 0;
}