#include <iostream>
using namespace std;

int main() {
    unsigned short cases, ancho, alto, cuadro;
    cin >> cases;
    for(unsigned short i = 0; i < cases; ++i) {
        cin >> ancho >> alto >> cuadro;
        if(cuadro % (ancho * alto) > 0) {
            cout << cuadro / (ancho * alto) + 1;
        } else {
            cout << cuadro / (ancho * alto);
        }
        cout << "\n";
    }
    return 0;
}