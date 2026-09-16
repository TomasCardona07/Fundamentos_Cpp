#include <iostream>

using namespace std;
int main(){
	int contadorNum = 0;
	for(int i = 1; i <= 10; i++){
		contadorNum += (i * i);
	}
	cout << "La suma de los cuadrados es: " << contadorNum << endl;
	return 0;
}