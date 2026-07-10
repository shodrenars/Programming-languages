#include <iostream>
#include <vector>
using namespace std;

int main() {
    // arrays can be of all variable types
    // full initialization
    int arr[5] = {1, 2, 3, 4, 5}; // array of integers
    string names[5] = {"Alice", "Bob", "Charlie", "David", "Eve"}; // array of strings

    // printing the array
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    for (int i = 0; i < 5; i++) {
        cout << "Name " << i << ": " << names[i] << endl;
    }

    // array of garbage values without initialization
    int numbers[5]; 
    for (int i = 0; i < 5; i++) {
        cout << "garbage value:  " << i << ": " << numbers[i] << endl;
    }
    
    // array of integers with size determined by the number of elements
    int numbers2[] = {1, 2, 3};

    // partial initialization of an array
    int numbers3[5] = {1, 2}; // remaining elements will be initialized to 0

    // zero initiation of an array
    int numbers4[5] = {}; // all elements will be initialized to 0

    // ERROR: size must be const
    int size = 5;
    int arr[size]; 
    
    //Correct 
    const int fixedSize = 5;
    int arr2[fixedSize];

    //2d array
    // 2 rows and 3 columns
    int arr2D[2][3] = {{1, 2, 3}, {4, 5, 6}}; 

    //3d array
    // 2 blocks, each with 2 rows and 3 columns
    int arr3D[2][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};

    // array of pointers
    int arr2[3] = {10, 20, 30};
    cout << arr;     // Prints a memory address (e.g., 0x7ffeefbff510)
    cout << *arr;    // Dereferences the pointer. Prints: 10
    cout << *(arr+1); // Pointer arithmetic. Moves 4 bytes ahead. Prints: 20

    //#include <vector>
    vector<int> integers;
    integers.push_back(10); // adds 10 to the end of the vector
    integers.push_back(20); // adds 20 to the end of the vector

    integers.pop_back(); // removes the last element (20) from the vector

    integers[0] = 30; // changes the first element to 30

    int d = integers[0]; // assigns the first element to d

    integers.size(); // returns the number of elements in the vector (1 in this case)
    return 0;
}