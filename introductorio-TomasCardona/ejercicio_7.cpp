#include <iostream>

using namespace std;
int main(){
	const float IVA = 0.19;
	float precio;
	
	cout << "Ingrese el precio del producto\n"; cin >> precio;
	float Nprecio = precio * IVA;
	cout << "precio con iva = " << (precio + Nprecio) << endl;
	return 0;
}