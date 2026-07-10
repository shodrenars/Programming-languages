#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    switch (number) {
        case 0:
            cout << "The number is zero." << endl;
            break;
        case 1:
            cout << "The number is one." << endl;
            break;
        case 2:
            cout << "The number is two." << endl;
            break;
        default:
            cout << "The number is neither zero, one, nor two." << endl;
            break;
    }
    return 0;
}