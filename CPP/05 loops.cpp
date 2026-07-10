#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 5; i++) { 
// Initialization(declare and set a starting value for a loop counter variable)
// Condition (if returns true, the loop will continue to run)
// Update (increment or decrement the loop counter variable)
// if checks before the loop runs
        a ++;
        cout << "for: " << a << endl;
    }

    while(b < 5) {
// Condition (if returns true, the loop will continue to run)
        b++;
        cout << "while: " << b << endl;
    }

    do {
        c++;
        cout << "do while: " << c << endl;
    } while(c < 5);
// Condition (if returns true, the loop will continue to run)
// do-while checks after the loop runs
    return 0;
}