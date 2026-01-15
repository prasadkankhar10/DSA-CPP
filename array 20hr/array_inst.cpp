#include <iostream>
using namespace std;


int main (){
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5}; // Increased size for insertion

    int pos = 2; // Position to insert (0-based index)
    int value = 10; // Value to insert

    for (int i=n;i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    n++;

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << endl;
    }
}