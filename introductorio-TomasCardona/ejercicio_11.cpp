#include <iostream>
#include <cmath>

using namespace std;
int main(){
	float a;
	float b;
	float hipotenusa;
	cout << "Ingrese el valor del primer cateto\n";
	cin >> a;
	cout << "Ingrese el valor del segundo cateto\n";
	cin >> b;
	
	a = a * a;
	b = b * b;
	
	hipotenusa = sqrt(a + b);
	
	cout << "el valor de la hipotenusa es: " <<	hipotenusa;										
}