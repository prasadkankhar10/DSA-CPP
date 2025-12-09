# Pointer in C++



Pointers are special variables that **store the address** of other variables. They are fundamental in C++ for memory management, efficient function argument passing, and working with arrays and dynamic data structures.



```c++
#include <iostream>
using namespace std;

void passByReference(int* ptr) {
    *ptr += 10;
}

int main() {
    // Basic pointer
    int a = 5;
    int* p = &a;
    cout << "Value of a: " << a << endl;
    cout << "Pointer p points to a: " << *p << endl;

    // Pointer to pointer
    int** pp = &p;
    cout << "Pointer to pointer pp points to p: " << **pp << endl;

    // NULL pointer
    int* np = nullptr;
    cout << "NULL pointer np: " << np << endl;

    // Pass by reference using pointer
    passByReference(p);
    cout << "Value of a after passByReference: " << a << endl;

    // Array pointer
    int arr[5] = {10, 20, 30, 40, 50};
    int* ap = arr;
    cout << "Array pointer ap points to arr[0]: " << *ap << endl;

    // Pointer arithmetic: increment, decrement
    ap++; // points to arr[1]
    cout << "After increment, ap points to arr[1]: " << *ap << endl;
    ap--; // back to arr[0]
    cout << "After decrement, ap points to arr[0]: " << *ap << endl;

    // Add/subtract numbers
    ap += 2; // points to arr[2]
    cout << "After adding 2, ap points to arr[2]: " << *ap << endl;
    ap -= 1; // points to arr[1]
    cout << "After subtracting 1, ap points to arr[1]: " << *ap << endl;

    // Subtract pointers
    int* p1 = &arr[4];
    int* p2 = &arr[1];
    cout << "p1 - p2 = " << p1 - p2 << endl; // number of elements between

    // Compare pointers
    cout << "p1 == p2: " << (p1 == p2) << endl;
    cout << "p1 != p2: " << (p1 != p2) << endl;
    cout << "p1 > p2: " << (p1 > p2) << endl;
    cout << "p1 >= p2: " << (p1 >= p2) << endl;
    cout << "p1 < p2: " << (p1 < p2) << endl;
    cout << "p1 <= p2: " << (p1 <= p2) << endl;

    return 0;
}
```

### 

***

**Pointer Declaration**

`int* p;` declares a pointer to an integer.

**Address-of Operator (****`&`** **&)**

Gets the address of a variable, e.g., `p = &a;`.

**Dereferencing (****`*`** ***)**

Accesses the value at the address, e.g., `*p`.

**Pointer to Pointer**

`int** pp = &p;` stores the address of another pointer.

**NULL Pointer**

`int* np = nullptr;` points to nothing (safe way to initialize a pointer)

**Pass by Reference**

Functions can modify variables by passing their address, e.g., `void passByReference(int* ptr)`.

**Array and Pointers**

The name of an array is a pointer to its first element, e.g., `int* ap = arr;`

**Pointer Arithmetic**

You can increment/decrement pointers to move through arrays (`ap++`, `ap--`).

**Pointer Subtraction**

Subtracting two pointers gives the number of elements between them (`p1 - p2`).

**Pointer Comparison**

You can compare pointers (`p1 == p2`, `p1 > p2`, etc.).

***

![](pointer.svg)





## Output Example

````
Value of a: 5
Pointer p points to a: 5
Pointer to pointer pp points to p: 5
NULL pointer np: 0
Value of a after passByReference: 15
Array pointer ap points to arr[0]: 10
After increment, ap points to arr[1]: 20
After decrement, ap points to arr[0]: 10
After adding 2, ap points to arr[2]: 30
After subtracting 1, ap points to arr[1]: 20
p1 - p2 = 3
p1 == p2: 0
p1 != p2: 1
p1 > p2: 1
p1 >= p2: 1
p1 < p2: 0
p1 <= p2: 0
````

Pointers are powerful but require careful handling to avoid errors like dereferencing NULL or dangling pointers.