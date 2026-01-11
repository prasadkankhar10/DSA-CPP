#include <iostream>
#include <vector>

using namespace std;

void countFrequencies(const vector<int>& arr) {
    if (arr.empty()) {
        
        return;
    }

    int count = 1;

    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            cout << arr[i - 1] << " -> " << count << endl;
            count = 1;
        }
    }

    // Print frequency of last element
    cout << arr.back() << " -> " << count << endl;
}

int main() {
    vector<vector<int>> testCases = {
        {10, 10, 20, 30, 30, 30},
        {5, 5, 5, 5, 5},
        {1, 2, 3, 4, 5},
        {100},
        {},
        {1, 1, 2, 2, 3}
    };

    for (size_t i = 0; i < testCases.size(); i++) {
        cout << "Test Case " << i + 1 << ":" << endl;
        countFrequencies(testCases[i]);
        cout << "------------------" << endl;
    }

    return 0;
}

// this was a good quetion i have learn about arr.back and why we use this and as this 20hr with array was going i am knowing that i lack in logic as we need to coder i have to work on it more 
