#include <iostream>

using namespace std;
int main(){
	float num1;
	float num2;
	
	cout << "Ingrese el valor del numero 1 \n";
	cin >> num1;
	
	cout << "Ingrese el valor de numero 2 \n";
	cin >> num2;
	
	cout << "Resultado de la suma: \n";
	cout << num1 + num2 << "\n";
	
	cout << "Resultado de la resta: \n";
	cout << num1 - num2 << "\n";
	
	cout << "Resultado de la multiplicacion: \n";
	cout << num1 * num2 << "\n";
	
	if(num2 == 0){
		cout << "No se puede dividir por 0 \n";
	}
	else{
		cout << "Resultado de la division: \n";
		cout << num1 / num2 << "\n";
	}
	
	return 0;
}