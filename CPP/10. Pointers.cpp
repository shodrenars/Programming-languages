#include <iostream>
using namespace std;

int main() {
    // 1. A normal variable holding a value
    int target = 100;

    // 2. A pointer storing the memory address of 'target'
    int* ptr = &target;

    // Putting * in front of the pointer tells it: "Go to that address and grab the value"
    cout << "Value at the address ptr points to: " << *ptr << endl;
}

int* = makes variables only for storaing memory adresses

target = 100
&target = 0x7ffee3b8c9ac

ptr = 0x7ffee3b8c9ac
*ptr = 100