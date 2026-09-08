#include <iostream>

using namespace std;
int main(){
	int a;
	int b;
	int aux;
	
	cout << "Ingrese el valor de a\n";
	cin >> a;
	
	cout << "Ingrese el valor de b\n";
	cin >> b;
	
	aux = a;
	a = b;
	b = aux;
	
	cout << "El valor nuevo de a: "<< a<<"\n";
	cout << "El valor nuevo de b: "<< b<<"\n";
	
	return 0;
	
}