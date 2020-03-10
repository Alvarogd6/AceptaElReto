#include <iostream>
using namespace std;

int main() {
    unsigned short cases;
    cin >> cases;
    for(unsigned short i = 0; i < cases; ++i) {
        unsigned short min, max;
        cin >> max;
        cin.ignore(1,'/');
        cin >> min;
        cout << (min > max ? "MAL\n" : "BIEN\n");
    }
    return 0;
}