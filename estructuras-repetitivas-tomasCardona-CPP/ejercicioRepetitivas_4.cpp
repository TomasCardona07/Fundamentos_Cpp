#include <iostream>

using namespace std;

int main(){
	int num;
	do{
		cout << "Ingrese el numero para ver la tabla\n";
		cin >> num;
		if(num > 10 || num < 1) cout << "numero incorrecto\n";
		
	}while(num > 10 || num < 1);
	
	for(int i = 1; i <= 10; i++)cout << num << " X " << i << " = " << (num * i) << endl;
	return 0;
}