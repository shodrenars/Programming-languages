// scope: Where the compiler can see a variable
// lifetime: How long the variable exists in memory

// local
//scope: exists only within the function
//lifetime: exists only while the function is executing

#include <iostream>
using namespace std;

void standardFunction() {
    int localX = 5; // Local variable created on the Stack
    cout << localX << endl; 
} // localX is DESTROYED here. The memory is reclaimed.

int main() {
    standardFunction();
    // cout << localX; // COMPILER ERROR! localX does not exist here.
}

//global
//scope: exists everywhere in the program
//lifetime: exists for the entire duration of the program

#include <iostream>
using namespace std;

int globalX = 42; // Global variable

void printGlobal() {
    globalX += 10; // Can read and write to it
}

int main() {
    printGlobal();
    cout << globalX << endl; // Prints 52
}

// static
//scope: exists only within the function
//lifetime: duration of the program. The variable is created only once and retains its value between function calls.

#include <iostream>
using namespace std;

void normalCounter() {
    int count = 0; // Reset to 0 every single time the function is called
    count++;
    cout << "Normal: " << count << "\n";
}

void staticCounter() {
    static int count = 0; // Initialized ONCE. Preserves its value!
    count++;
    cout << "Static: " << count << "\n";
}

int main() {
    normalCounter(); // Prints: Normal: 1
    normalCounter(); // Prints: Normal: 1
    
    cout << "---" << endl;
    
    staticCounter(); // Prints: Static: 1
    staticCounter(); // Prints: Static: 2
    staticCounter(); // Prints: Static: 3
}