#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 5; i++) { 
// Initialization(declare and set a starting value for a loop counter variable)
// Condition (if returns true, the loop will continue to run)
// Update (increment or decrement the loop counter variable)
// Loops certain amount of times
        a ++;
        cout << "for: " << a << endl;
    }

    while(b < 5) {
// Condition (if returns true, the loop will continue to run)
// Loops infinitely until the condition is false
        b++;
        cout << "while: " << b << endl;
    }

    do {
        c++;
        cout << "do while: " << c << endl;
    } while(c < 5);
// Condition (if returns true, the loop will continue to run)
// do-while checks after the loop runs
// Loops at least once, then checks the condition 

// Loops can be interrupted with these statements:
// break - exits the loop entirely
// continue - skips the rest of the loop and goes to the next iteration
// Loops can be nested inside of each other
    return 0;
}