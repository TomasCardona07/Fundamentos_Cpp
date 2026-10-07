#include <iostream>
using namespace std;

int main(){

    string nombres[3] = {"Hugo", "Paco", "Luis"};
    float promedios[3];
    float nota, suma;

    for(int i = 0; i < 3; i++){
        suma = 0;
        cout << "Notas de " << nombres[i] << endl;
        for(int i = 0; i < 4; i++){
            cout << "Ingrese la nota " << i + 1 << ": ";
            cin >> nota;
            suma = suma + nota;
        }
        promedios[i] = suma / 4;
    }
    cout << "Promedio de los estudiantes:" << endl;
    for(int i = 0; i < 3; i++){
        cout << nombres[i] << ": " << promedios[i] << endl;
    }

    return 0;
}
