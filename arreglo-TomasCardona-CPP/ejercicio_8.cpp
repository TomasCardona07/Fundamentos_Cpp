#include <iostream>
using namespace std;

int main(){
    char vector1[5] = {'a', 'b', 'c', 'd', 'e'};
    char vector2[5] = {'f', 'g', 'h', 'i', 'j'};
    char vector3[10];

    for(int i = 0; i < 5; i++){
        vector3[i] = vector1[i];
    }

    for(int i = 0; i < 5; i++){
        vector3[i + 5] = vector2[i];
    }

    cout << "El nuevo vector es: ";
    for(int i = 0; i < 10; i++){
        cout << vector3[i] << " ";
    }
    return 0;
}
