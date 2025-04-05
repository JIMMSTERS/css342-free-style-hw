#include <iostream>
#include <string>
using namespace std;


bool is_power_of_2_loop(int num) {
    while (num != 1) {
        if (num % 2 == 0) {
            num = num/2;
            continue;
        } else {
            return false;
        }
    }
    return true;
}

bool is_power_of_2_recursive(int num) {
    if (num ==1) {
        return true;
    }
    if (num % 2 == 0) {
        return is_power_of_2_recursive(num/2);
    }
    return false;
}

void testLoop() {
    for (int num = 1; num < 10; num++) {
        if (is_power_of_2_loop(num)) {
            cout << num << " is a power of 2" << endl;
        } else {
            cout << num << " is not a power of 2" << endl;
        }
    }
}

void testRecursive() {
    for (int num = 1; num < 10; num++) {
        if (is_power_of_2_recursive(num)) {
            cout << num << " is a power of 2" << endl;
        } else {
            cout << num << " is not a power of 2" << endl;
        }
    }
}

int main() {
    testLoop();
    testRecursive();
    return 0;
}

 
