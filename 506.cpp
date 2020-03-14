#include <iostream>
using namespace std;

int main() {
    unsigned short cases, min, max;
    cin >> cases;
    for(unsigned short i = 0; i < cases; ++i) {
        cin >> max;
        cin.ignore(1,'/');
        cin >> min;
        cout << (min > max ? "MAL\n" : "BIEN\n");
    }
    return 0;
}