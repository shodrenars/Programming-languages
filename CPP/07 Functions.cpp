#include <iostream>
using namespace std;
// Functions have 2 types
// 1. those who return values
// 2. those who doest return values


// void doesnt return values
void printHello() {
    cout << "Hello, World!" << endl;
}

// int, string, bool, double, float, char all needs to return values to work
int add(int a, int b) {
    return a + b;
}

==============================
// Declaration
int multiply(int a, int b); 

int main() {
    return multiply(3, 4); // Compiler is happy because it knows multiply exists
}

// Definition
int multiply(int a, int b) { 
    return a * b; 
}
==============================


//Good for small values like int, char, bool (lowers performance because it avoids copying)
void modifyValue(int x) {
    x = 100; // Original variable outside remains untouched
}

//Good for large values like arrays, vectors, strings(increases performance because it avoids copying)
void modifyReference(int& x) {
    x = 100; // This changes the original variable!
}

//You can have multiple functions with the exact same name
//as long as their parameter signatures are different.

void log(int i) { cout << "Int: " << i; }
void log(double d) { cout << "Double: " << d; }
void log(string s) { cout << "String: " << s; }

//function pointers

void greet() { std::cout << "Hello!"; }

int main() {
    void (*funcPtr)() = greet; // Pointing to the function
    funcPtr();                 // Calling the function via pointer
}

//Recursive functiosn are functions that call themselves. good for search algorithms

int countdown(int n) {
    if (n <= 0) return 0; // Base case to prevent infinite loops
    std::cout << n << " ";
    return countdown(n - 1); // Recursive call
}