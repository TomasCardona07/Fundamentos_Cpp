#include <iostream>

using namespace std;

int main(){
	int numero;
	int i = 0;
	do{
		cout <<"Ingrese un numero, 0 es para salir\n";
		cin >> numero;
		if(numero > 0) i++;
		else break;
	}while(true);
	cout << "Se ingresaron " << i << " numeros mayores a 0 " << endl;
}