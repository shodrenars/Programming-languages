#include <iostream>
#include <memory>

using namespace std;

void uniqueExample() {
    // Creating a unique pointer holding an integer 50
    unique_ptr<int> ptr1 = make_unique<int>(50);
    
    // unique_ptr<int> ptr2 = ptr1; 
    // ERROR! This will fail to compile. You cannot copy a unique pointer.

    // To transfer ownership, we must move it:
    unique_ptr<int> ptr2 = move(ptr1); 
    // Now ptr1 is empty (nullptr), and ptr2 owns the value 50.
} // ptr2 goes out of scope and the memory is automatically freed!


#include <iostream>
#include <memory>

using namespace std;

void sharedExample() {
    // 1. Create a shared pointer
    shared_ptr<int> mainPtr = make_shared<int>(99);
    cout << "Owners: " << mainPtr.use_count() << endl; // Prints: 1

    {
        // 2. Share ownership with another pointer
        shared_ptr<int> tempPtr = mainPtr; 
        cout << "Owners: " << mainPtr.use_count() << endl; // Prints: 2
        cout << "Value: " << *tempPtr << endl;            // Prints: 99
    } // tempPtr is destroyed here.

    cout << "Owners: " << mainPtr.use_count() << endl; // Prints: 1
} // mainPtr is destroyed here, bringing owners to 0. Memory is freed!