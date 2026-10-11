#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;
int main(){
	int numeros[8];
	cout << "Ingresa los numeros del vector \n";
	for(int i = 0; i < 8; i++){
		cout << "Ingresa el numero en el indice: " << i << endl;
		cin >> numeros[i];
	}
	
	//mostrar vector
	cout << "\n Numeros ingresados: " << endl;
	for(int n: numeros){
		cout << n << ", ";
	}
	
	
	//burbuja
	int aux;
	for(int i = 0; i <= 6; i++){
		for(int c = 0; c <= (6 - i); c++){
			if(numeros[c] > numeros[c+1]){
				aux = numeros[c];
				numeros[c] = numeros[c+1];
				numeros[c+1] = aux;
			}
		}
	}
	cout << "\n Numeros Ordenados: " << endl;
	for(int n: numeros){
		cout << n << ", ";
	}
	
	//busqueda binaria
	bool encontrado = false;
	int mitad;
	int inicio = 0;
	int final = 7;
	int objetivo = 12;
	int i = 0;
	while(inicio <= final){
		mitad = (final + inicio) / 2;
		if(numeros[mitad] == objetivo){
			cout << "\n Numero encontrado :D " << endl;
			encontrado = true;
			break;
		}
		else if(numeros[mitad] < objetivo){
			inicio = mitad + 1;
		}
		else{
			final = mitad - 1;
		}
	}
	if(!encontrado) cout << "\n no se encontro el numero " << endl;
	
	return 0;
}