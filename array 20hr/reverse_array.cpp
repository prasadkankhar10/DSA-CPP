#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    // YOUR CODE HERE
    int i=0,j=arr.size()-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void printArray(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}

int main() {
    vector<vector<int>> testCases = {
        {1, 2, 3, 4, 5},
        {10, 20, 30, 40},
        {99, -5, 100},
        {42},
        {}
    };

    for (size_t i = 0; i < testCases.size(); ++i) {
        vector<int> arr = testCases[i];
        cout << "Test Case " << i + 1 << endl;
        cout << "Original: ";
        printArray(arr);
        cout << endl;
        
        reverseArray(arr);
        
        cout << "Reversed: ";
        printArray(arr);
        cout << endl << "---" << endl;
    }

    return 0;
}