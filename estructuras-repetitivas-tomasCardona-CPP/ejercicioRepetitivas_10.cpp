#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3;
    int ganaronTres = 0;
    int ganaronAlMenosUno = 0;
    int ganaronUltimo = 0;

    for (int alumno = 1; alumno <= 5; alumno++) {
        cout << "Alumno " << alumno << endl;
        cout << "Nota del examen 1: ";
        cin >> nota1;
        
        cout << "Nota del examen 2: ";
        cin >> nota2;
        
        cout << "Nota del examen 3: ";
        cin >> nota3;
        

        if (nota1 >= 3.0 && nota2 >= 3.0 && nota3 >= 3.0) {
            ganaronTres++;
        }

        if (nota1 >= 3.0 || nota2 >= 3.0 || nota3 >= 3.0) {
            ganaronAlMenosUno++;
        }

        if (nota3 >= 3.0) {
            ganaronUltimo++;
        }
    }
    cout << "Alumnos que ganaron los tres examenes: " << ganaronTres << endl;
    cout << "Alumnos que ganaron al menos un examen: " << ganaronAlMenosUno << endl;
    cout << "Alumnos que ganaron el ultimo examen: " << ganaronUltimo << endl;
    return 0;
}
