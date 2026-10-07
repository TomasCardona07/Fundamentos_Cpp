 //Arreglos unidimensionales - Realizar un programa que lea de la entrada estándar de un vector de números enteros y defina si alguno de los números es igual a la suma del resto de elementos del vector.
 #include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    int numeros[n];

    for(int i = 0; i < n; i++){
        cout << "Ingrese el valor del indice: " << i << endl;
        cin >> numeros[i];
    }
    
    bool encontrado = false;
    
    for(int i = 0; i < n; i++){
        int suma = 0;

        for(int j = 0; j < n; j++){
            if(i != j){
                suma = suma + numeros[j];
            }
        }

        if(numeros[i] == suma){
            encontrado = true;
            cout << "El numero " << numeros[i] << " es igual a la suma del resto de elementos." << endl;
        }
    }

    if(encontrado == false){
        cout << "Ningun numero es igual a la suma del resto de elementos." << endl;
    }

    return 0;
}
 