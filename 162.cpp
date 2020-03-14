#include <iostream>
#include <string>
using namespace std;

int main() {
    unsigned short cases;
    string prim, seg, aux;
    cin >> cases;
    while(cases != 0 ) {
        aux = "--------";
        cout << "|"; 
        for(unsigned short i = 0; i < cases; ++i) {
            cout << aux;
        }
        cout << "|\n";
        prim = " ";
        cin >> aux;
        seg = aux;
        for(unsigned short i = 1; i < cases; ++i) {
            seg += aux;
            prim += " ";
        }
        aux = prim;
        prim += seg;
        seg += aux;
        for(unsigned short i = 0; i < 2; ++i) {
            prim += prim;
            seg += seg;

        }
        bool pass = true;
        for(unsigned short i = 0; i < 8; ++i) {
            for(unsigned short p = 0; p < cases; ++p) {
                cout << "|";
                if(pass) {
                    cout << prim;
                } else {
                    cout << seg;
                }
                cout << "|\n";
            }
            pass = !pass;
        }
        aux = "--------";
        cout << "|"; 
        for(unsigned short i = 0; i < cases; ++i) {
            cout << aux;
        }
        cout << "|\n";
        cin >> cases;
    }
    return 0;
}