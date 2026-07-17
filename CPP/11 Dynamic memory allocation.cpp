#include <iostream>

void stackExample() {
    // STACK ALLOCATION
    int age = 25; 
    // The moment this function ends, 'age' is automatically destroyed.
}

void heapExample() {
    // HEAP ALLOCATION (Dynamic Memory)
    // 1. 'new int' allocates 4 bytes on the Heap.
    // 2. 'ptr' is a stack variable holding the memory address of that Heap space.
    int* ptr = new int; 
    
    // Assigning a value to our new heap memory
    *ptr = 100; 

    std::cout << "Value on heap: " << *ptr << std::endl;

    // 3. You MUST manually clean it up!
    delete ptr; 
    
    // 4. Good practice: set pointer to nullptr so it doesn't point to garbage memory
    ptr = nullptr; 
}

// differences

// stack
// 1. lifetime automatically dies when the function ends
// 2. faster allocation and deallocation
// 3. limited size (usually a few MBs)

// heap
// 1. lifetime is controlled by the programmer (must manually delete)
// 2. slower allocation and deallocation
// 3. much larger size (limited by system memory)