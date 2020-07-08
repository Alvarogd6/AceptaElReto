#include <iostream>
using namespace std;

int main() {
    int casos = 0;
    float aux;
    string n;

    cin >> casos;

    while(casos > 0) {
        bool cero = false;
        for(int i = 0; i < 5; ++i) {
            cin >> aux;
            if(aux >= 9.0) {
                getline(cin, n);
                cero = false;
                break;
            } else if(aux == 0.0) {
                cero = true;
            }
        }
        if(!cero) {
            cout << "MEDIA\n";
        } else {
            cout << "SUSPENSO DIRECTO\n";
        }
        --casos;
    }
    return 0;
}
