#include <iostream>
#include <vector>
using namespace std;

// Function to find the length of the longest subarray with sum K
int longestSubarrayWithSumK(vector<int>& a, int k) {
    // YOUR CODE HERE
    int n= a.size();
    int l=0;
    
    for(int i=0;i<n;i++){
        int s=0;

        for(int j=i;j<n;j++){
            s += a[j];

            if(s==k){
                l=max(l,j-i+1);
            }
        }
    }
    return l;
}

int main() {
    // Test Case 1: [1, 2, 3, 1, 1, 1, 4], K = 3. Expected: 3 ([1, 1, 1])
    vector<int> arr1 = {1, 2, 3, 1, 1, 1, 4};
    int K1 = 3;
    cout << "Array: [1, 2, 3, 1, 1, 1, 4], K = 3. Result: " << longestSubarrayWithSumK(arr1, K1) << endl;

    // Test Case 2: [10, 5, 2, 7, 1, 9], K = 15. Expected: 4 ([5, 2, 7, 1])
    vector<int> arr2 = {10, 5, 2, 7, 1, 9};
    int K2 = 15;
    cout << "Array: [10, 5, 2, 7, 1, 9], K = 15. Result: " << longestSubarrayWithSumK(arr2, K2) << endl;

    // Test Case 3: No matching subarray. Expected: 0
    vector<int> arr3 = {1, 1, 1};
    int K3 = 10;
    cout << "Array: [1, 1, 1], K = 10. Result: " << longestSubarrayWithSumK(arr3, K3) << endl;
    
    // Test Case 4: Single element match. Expected: 1
    vector<int> arr4 = {50, 1, 5, 2};
    int K4 = 5;
    cout << "Array: [50, 1, 5, 2], K = 5. Result: " << longestSubarrayWithSumK(arr4, K4) << endl;

    return 0;
}