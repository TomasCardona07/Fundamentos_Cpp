#include <iostream>
 using namespace std;
 int main(){
	int cantidad;
	float precio;
	float iva;
	float resultado;
	
	cout << "Ingrese la cantidad del producto\n";
	cin >> cantidad;
	
	cout << "Ingrese el precio del producto\n";
	cin >> precio;
	
	iva = (cantidad * precio) * 19;
	
	iva = iva / 100;
	
	resultado = (cantidad * precio) + iva;
	
	cout << "el resultado a pagar incluyendo iva es: "<< resultado<<"\n";
	
	return 0;
 	
 }