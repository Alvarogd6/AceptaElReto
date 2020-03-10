#include <iostream>
#include <math.h>
#include <string>
using namespace std;

bool prime(int n) {
    for(int i = 3; i <= sqrt(n); i += 2) {
        if(n % i == 0) return false;
    } 
    return true;
}

int main() {
    string word;
    int cases;
    int sum;
    cin >> cases;
    for(int i = 0; i < cases; ++i) {
        cin >> word;
        sum = 0;
        int j = 0;
        while(word[j] != '\0') {
            sum += word[j++];
        }
        if(!(sum & 0x1)) {
            sum -= 1;
        } else {
            sum -= 2;
        }
        while(!prime(sum)) {
            sum -= 2;
        }
        cout << sum << "\n";
    }
    return 0;
}