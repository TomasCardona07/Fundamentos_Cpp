#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 0, b = 1, siguiente;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "Serie Fibonacci: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";

        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    return 0;
}
