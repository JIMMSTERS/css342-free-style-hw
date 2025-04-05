#include <iostream>
using namespace std;

bool isPrime(int);

int main() {
    for (int num = 1; num < 10; num++) {
        if (isPrime(num)) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
