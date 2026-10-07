#include <iostream>
using namespace std;

int main(){
    char vector1[8] = {'o', 't', 'c', 'e', 'r', 'r', 'o', 'c'};
    char vector2[8];

    for(int i = 0; i < 8; i++){
        vector2[i] = vector1[7 - i];
    }
    cout << "El vector en orden inverso es: ";
    for(int i = 0; i < 8; i++){
        cout << vector2[i] << " , ";
    }
    return 0;
}
