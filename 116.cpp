#include <iostream>
#include <string>
using namespace std;

int main() {
    string hi = "Hola mundo.\n";
    unsigned short cases;
    cin >> cases;
    for(unsigned short x = 0; x < cases; ++x) {
        cout << hi;
    }
    return 0;
}