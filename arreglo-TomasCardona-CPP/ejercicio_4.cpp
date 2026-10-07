//Arreglos unidimensionales – Imprimir un arreglo en orden inverso: Realizar un programa que defina un vector de números enteros {1,2,3,4,5} y muestre en la salida estándar el vector en orden inverso del último al primer elemento. 

#include <iostream>

using namespace std;

int main(){
	int vector[] = {1,2,3,4,5};
	
	for(int i = 4; i >= 0; i--){
		cout << vector[i] << endl;
	}
	return 0;
}