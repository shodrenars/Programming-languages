int x = 10;
int y = 20;

// 1. Pointer to a Constant (const is on the left of the *)
const int* ptr1 = &x; 
// Read right-to-left: "ptr1 is a pointer to an integer that is constant."
// Can we change the address? YES (ptr1 = &y is okay)
// Can we change the value? NO (*ptr1 = 99 is a compiler error)

// 2. Constant Pointer (const is on the right of the *)
int* const ptr2 = &x; 
// Read right-to-left: "ptr2 is a constant pointer to an integer."
// Can we change the address? NO (ptr2 = &y is a compiler error)
// Can we change the value? YES (*ptr2 = 99 is okay)

// 3. Constant Pointer to a Constant
const int* const ptr3 = &x; 
// Read right-to-left: "ptr3 is a constant pointer to an integer that is constant."
// Can we change the address? NO
// Can we change the value? NO