#include <iostream>
#include <vector>
using namespace std;



int removeDuplicates(vector<int>& nums) {
    // YOUR CODE HERE
    int n=nums.size();
    if(n==0){
        return 0;
    }
    int ik=1;
    
    for(int i=1;i<n;i++){

        if(nums[i]!=nums[i-1]){
            nums[ik]=nums[i];
            ik++;
        }
    }
    return ik;
}

int main() {
    // Test Case 1: [1, 1, 2] -> k=2, nums=[1, 2, _]
    vector<int> nums1 = {1, 1, 2};
    int k1 = removeDuplicates(nums1);
    cout << "Test Case 1: [1, 1, 2]" << endl;
    cout << "Unique length k: " << k1 << endl;
    cout << "Modified array (first k elements): ";
    for (int i = 0; i < k1; ++i) {
        cout << nums1[i] << (i == k1 - 1 ? "" : ", ");
    }
    cout << endl << endl;

    // Test Case 2: [0, 0, 1, 1, 1, 2, 2, 3, 3, 4] -> k=5, nums=[0, 1, 2, 3, 4, _, ...]
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k2 = removeDuplicates(nums2);
    cout << "Test Case 2: [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]" << endl;
    cout << "Unique length k: " << k2 << endl;
    cout << "Modified array (first k elements): ";
    for (int i = 0; i < k2; ++i) {
        cout << nums2[i] << (i == k2 - 1 ? "" : ", ");
    }
    cout << endl << endl;

    // Test Case 3: Empty Array [] -> k=0
    vector<int> nums3 = {};
    int k3 = removeDuplicates(nums3);
    cout << "Test Case 3: []" << endl;
    cout << "Unique length k: " << k3 << endl;
    cout << "Modified array (first k elements): ";
    for (int i = 0; i < k3; ++i) {
        cout << nums3[i] << (i == k3 - 1 ? "" : ", ");
    }
    cout << endl << endl;

    // Test Case 4: No Duplicates [1, 2, 3]
    vector<int> nums4 = {1, 2, 3};
    int k4 = removeDuplicates(nums4);
    cout << "Test Case 4: [1, 2, 3]" << endl;
    cout << "Unique length k: " << k4 << endl;
    cout << "Modified array (first k elements): ";
    for (int i = 0; i < k4; ++i) {
        cout << nums4[i] << (i == k4 - 1 ? "" : ", ");
    }
    cout << endl << endl;

    return 0;
}