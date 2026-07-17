#include <iostream>
#include <string>

using namespace std;

// The Blueprint
struct Character {
    string name;
    int hp;

    // Using 'this' to resolve naming conflicts
    void setup(string name, int hp) {
        this->name = name; // 'this->name' is the struct's variable. 'name' is the parameter.
        this->hp = hp;     // 'this->hp' is the struct's variable. 'hp' is the parameter.
    }

    // Printing status and showing where 'this' points
    void printStatus() {
        cout << "Inside printStatus, 'this' points to: " << this << endl;
        cout << "Character Name: " << this->name << " | HP: " << this->hp << endl;
    }
};

int main() {
    // Object 1
    Character player1;
    player1.setup("Knight", 100);

    // Object 2
    Character player2;
    player2.setup("Mage", 80);

    cout << "=== Player 1 Memory & Status ===" << endl;
    cout << "Actual address of player1:       " << &player1 << endl;
    player1.printStatus(); // Notice how 'this' inside the function matches the address above!

    cout << "\n=== Player 2 Memory & Status ===" << endl;
    cout << "Actual address of player2:       " << &player2 << endl;
    player2.printStatus(); // Notice how 'this' dynamically changes to match player2!

    return 0;
}