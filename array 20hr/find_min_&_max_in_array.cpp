#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct MinMaxResult {
    int minVal;
    int maxVal;
};

MinMaxResult findMinMax(const vector<int>& arr) {
    // Handle empty array
    if (arr.empty()) {
        return {INT_MAX, INT_MIN};  // or throw an exception if preferred
    }

    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int value : arr) {
        if (value < minVal) {
            minVal = value;
        }
        if (value > maxVal) {
            maxVal = value;
        }
    }

    return {minVal, maxVal};
}

int main() {
    vector<vector<int>> testCases = {
        {10, 5, 2, 7, 15},
        {1},
        {5, 5, 5, 5},
        {-10, 0, 10},
        {2, 1},
        {100, 1, 99, 50},
        {}
    };

    for (int i = 0; i < testCases.size(); ++i) {
        cout << "Test Case " << i + 1 << ": ";
        MinMaxResult result = findMinMax(testCases[i]);

        if (testCases[i].empty()) {
            cout << "Empty array" << endl;
        } else {
            cout << "Min = " << result.minVal
                 << ", Max = " << result.maxVal << endl;
        }
    }
    return 0;
}
