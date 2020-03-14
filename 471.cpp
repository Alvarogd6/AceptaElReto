#include <iostream>
using namespace std;

int main() {
    unsigned short cases;
    short pinchazo, pos;
    cin >> cases;
    for(unsigned short i = 0; i < cases; ++i) {
        cin >> pinchazo >> pos;
        pos -= pinchazo;
        if(pos % 180 == 0) {
            cout << "DA IGUAL\n";
        } else if((pos > 0 && pos < 180) || (pos < 0 && pos < -180)){
            cout << "ASCENDENTE\n";
        } else {
            cout << "DESCENDENTE\n";
        }
    }
    return 0;
}