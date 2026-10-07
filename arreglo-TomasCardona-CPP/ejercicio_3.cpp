 //Arreglos unidimensionales – Elementos del vector con su respectivo índice: Realizar un programa que lea de la entrada estándar de un vector de números enteros y muestre en la salida estándar los elementos del vector asociados a su respectivo índice.
 #include <iostream>
 
 using namespace std;
 int main(){
 	int n;
 	cout << "Ingrese la longitud del vector\n"; cin >> n;
 	int vector[n];
 	
 	for(int i = 0; i < n; i++){
 		cout << "Ingresa el valor de la posicion: "<< i << endl;
 		cin >> vector[i];
	 }
	 
	cout << endl;
	
	for(int i = 0; i < n; i++){
		cout << "indice: " << i << " Valor: " << vector[i] << endl;
	}
	
	return 0;
 } 