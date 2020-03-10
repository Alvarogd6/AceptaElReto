#include <iostream>
using namespace std;

void min(unsigned short& min, unsigned short& max) {
    if(min < max) return;
    unsigned short aux = min;
    min = max;
    max = aux;
}

int main() {
    unsigned short cases;
    cin >> cases;
    for(unsigned short i = 0; i < cases; ++i) {
        unsigned short uno, dos;
        cin >> uno >> dos;
        if(uno == dos) {
            cout << ((uno + dos) / 2) + 1 << "\n";
        } else {
            min(uno, dos);
            unsigned short i = uno + 1;
            cout << i;
            while(i < dos + 1) {
                cout << " " << (++i);
            }
            cout << "\n";
        } 
    }
    return 0;
}



