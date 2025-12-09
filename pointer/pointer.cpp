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