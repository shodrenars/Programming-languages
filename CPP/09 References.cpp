//Reference is simply an alias — an alternative name — for an already existing variable.

//Once a reference is initialized to a variable, both the variable name and the reference name
//point to the exact same memory location. Whatever you do to the reference happens to the
//variable, and vice versa.

#include <iostream>
using namespace std;
int main() {
    int original = 10;
    int& alias = original; // alias is now a reference to original

    cout << original << "\n"; // Prints 10
    cout << alias << "\n";    // Prints 10

    alias = 20; // Changing the alias...
    
    cout << original << "\n"; // Prints 20! The original changed too.
}


//They must be initialized immediately: You cannot declare a reference without telling it
//what variable to point to.

int& ref; // COMPILER ERROR! What is it referencing?

//They cannot be changed to reference something else (Rebinding): Once a reference is
//tied to a variable, it is locked to that variable for life.

int x = 5;
int y = 10;
int& ref = x; // ref is tied to x
ref = y;      // This does NOT make ref point to y. 
              // It just copies the value of y (10) into x!