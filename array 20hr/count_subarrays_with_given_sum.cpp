#include <iostream>
#include <vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    // YOUR CODE HERE
    int n=nums.size(), c=0;

    for(int i=0;i<n;i++){
        int cs=0;
        for(int j=i;j<n;j++){
            cs+=nums[j];

            if(cs==k){
                c++;
            }
        }
    }
    return c;
}

int main() {
    // Test Cases:
    // Format: {{nums array}, k value} 
    vector<pair<vector<int>, int>> testCases = {
        {{1, 1, 1}, 2},         // Expected: 2
        {{1, 2, 3}, 3},         // Expected: 2
        {{0, 0, 0}, 0},         // Expected: 6
        {{-1, 1, -1, 1}, 0},    // Expected: 4
        {{5, -2, 3, 1, 4}, 7}  // Expected: 2
    };

    vector<int> expectedResults = {2, 2, 6, 4, 2};

    for (size_t i = 0; i < testCases.size(); ++i) {
        vector<int> nums = testCases[i].first;
        int k = testCases[i].second;
        int result = subarraySum(nums, k);
        
        cout << "Test Case " << i + 1 << " (k=" << k << ")" << endl;
        cout << "Input Nums: [";
        for (size_t j = 0; j < nums.size(); ++j) {
            cout << nums[j] << (j == nums.size() - 1 ? "" : ", ");
        }
        cout << "]" << endl;
        cout << "Calculated Count: " << result << " (Expected: " << expectedResults[i] << ")" << endl;
        cout << "-------------------" << endl;
    }

    return 0;
}