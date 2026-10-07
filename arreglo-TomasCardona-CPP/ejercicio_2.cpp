
#include <iostream>

using namespace std;
int main(){
	int numeros[] = {1,2,3,4,5};
	int resultado = numeros[0];
	
	for(int i = 1; i < 5; i++){
		resultado *= numeros[i];
	}
	cout << "multiplicacion total: " << resultado << endl;
	return 0;
	
} 