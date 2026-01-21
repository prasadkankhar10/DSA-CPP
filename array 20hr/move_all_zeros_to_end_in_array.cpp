#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;  // position for next non-zero

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector<vector<int>> testCases = {
        {0, 1, 0, 3, 12},
        {0, 0, 0, 1, 2},
        {1, 2, 3, 4},
        {0},
        {1},
        {0, 0, 0, 0, 0},
        {5, 0, 8, 0, 9, 0, 1}
    };
    
    for (int i = 0; i < testCases.size(); ++i) {
        vector<int> currentCase = testCases[i];
        cout << "Test Case " << i + 1 << ": ";
        
        moveZeroes(currentCase);
        
        cout << "[";
        for (int j = 0; j < currentCase.size(); ++j) {
            cout << currentCase[j];
            if (j < currentCase.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}