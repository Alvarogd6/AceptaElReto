#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    string num;
    long size;
    cin >> num;
    while(num != "0") {
        size = num.length();
        if(num[size - 1] == '0') {
            cout << "NO\n";
        } else {
            long long suma = 0;
            for(int i = 0; i < size; ++i) {
                suma += (num[i] - '0') * pow(10, size - i - 1) + 
                        (num[size - 1 - i] - '0') * pow(10, size - i - 1);
            }
            bool rev = true;
            while(suma != 0) {
                int digit = suma % 10;
                if(digit % 2 == 0) {
                    rev = false;
                    break;
                }
                suma = suma / 10;
            }
            cout << (rev ? "SI\n" : "NO\n");
        }
        cin >> num;
    }
    return 0;
}