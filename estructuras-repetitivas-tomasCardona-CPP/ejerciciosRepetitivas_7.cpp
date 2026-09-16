#include <iostream>
using namespace std;

int main(){
	float tempMayor = -999999;
	float tempMenor = 9999999;
	float temp;
	
	for(int i = 0; i<= 24; i += 4){
		cout << "Son las: " << i << ":00, Ingrese la temperatura actual " << endl;
		cin >> temp;
		if(temp > tempMayor) tempMayor = temp;
		if(temp < tempMenor) tempMenor = temp;
	}
	
	cout << "La temperatura mayor es: " << tempMayor << endl;
	cout << "La temperatura menor es: " << tempMenor << endl;
	
	return 0;
}