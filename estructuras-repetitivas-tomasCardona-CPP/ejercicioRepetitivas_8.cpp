#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int resultado = 1;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;
    for (int i = 1; i <= y; i++) {
        resultado = resultado * x;
    }
    cout << x << "^" << y << " = " << resultado << endl;
    return 0;
}
