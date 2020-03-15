#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool impar(unsigned short i) {
    return i % 2 == 1;
}

int main() {
    string num;
    cin >> num;
    while(num[0] != '-') {
        if(*(find_if (num.begin(), num.end(), impar)) == '\0') {
            cout << "SI\n";
        } else {
            cout << "NO\n";
        }
        cin >> num;
    }
    return 0;
}