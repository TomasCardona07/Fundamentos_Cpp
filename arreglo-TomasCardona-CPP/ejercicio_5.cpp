 //Arreglos unidimensionales - Realizar un programa que lea de la entrada estándar de un vector de números enteros y determine y muestre en la salida estándar el mayor elemento del vector. 
 
 #include <iostream>
 using namespace std;
 
 int main(){
 	int n;
 	cout << "Ingresa la longitud del vector " << endl;
 	cin >> n;
 	
 	int numeros[n];
 	int mayor = -999999;
 	
 	for(int i = 0; i < n; i++){
 		cout << "Ingrese el valor del indice: " << i << endl; cin >> numeros[i];
	 }
	 
 	for(int i = 0; i < n; i++){
 		if(numeros[i] > mayor){
 			mayor = numeros[i];
		 }
	 }
	 
	 cout << "El numero mayor es: " << mayor << endl;
	 
	 return 0;
 }