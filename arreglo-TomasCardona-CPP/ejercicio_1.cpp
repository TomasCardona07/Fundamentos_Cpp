
#include <iostream>

using namespace std;
int main(){
	int numeros[] = {1,2,3,4,5};
	int suma;
	
	for(int i = 0; i < 5; i++){
		suma += numeros[i];
	}
	cout << "suma total: " << suma << endl;
	
	return 0;
	
}