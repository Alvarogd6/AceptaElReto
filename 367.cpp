#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned short cases, portal, act, aux, max;
    cin >> cases;
    for(unsigned short i = 0; i < cases; ++i) {
        cin >> act >> portal;
        max = act;
        
        bool pos[5000];
        fill_n(pos, 5000, false);

        for(unsigned short j = 0; j < portal; ++j) {
            cin >> aux;
            pos[aux] = true;
            if(max < aux) max = aux;
        }

        aux = 0;
        bool prim = true;
        while(portal > 0) {
            if(act + aux <= max && pos[act + aux]) {
                if(!prim) {
                    cout << " " << act + aux;
                } else {
                    cout << act + aux;
                    prim = false;
                }
                act += aux;
                pos[act] = false;
                --portal;
                aux = 1;
            } else if(act - aux >= 0 && pos[act - aux]) {
                if(!prim) {
                    cout << " " << act - aux;
                } else {
                    cout << act - aux;
                    prim = false;
                }
                act -= aux;
                pos[act] = false;
                --portal;
                aux = 1;
            } else {
                ++aux;
            }
        }
        cout << "\n";
    }
    return 0;
}