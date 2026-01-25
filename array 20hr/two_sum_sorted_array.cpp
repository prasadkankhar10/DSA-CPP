#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& num, int target) {
    // YOUR CODE HERE
    int l=0,r=num.size()-1;

    while(l<r){
        int csum=num[l]+num[r];

        if(csum==target){
            return{l+1,r+1};
        }
        
        if(csum>target){
            r--;
        }else{
            l++;
        }
    }
    return {1, 1};
}

int main() {
    // Test Case 1: [2, 7, 11, 15], target = 9 -> Expected [1, 2]
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = twoSum(nums1, target1);
    cout << "Test 1 Input: [2, 7, 11, 15], Target: 9" << endl;
    cout << "Test 1 Result (Expected [1, 2]): [" << result1[0] << ", " << result1[1] << "]" << endl;

    // Test Case 2: [2, 3, 4], target = 6 -> Expected [1, 3]
    vector<int> nums2 = {2, 3, 4};
    int target2 = 6;
    vector<int> result2 = twoSum(nums2, target2);
    cout << "\nTest 2 Input: [2, 3, 4], Target: 6" << endl;
    cout << "Test 2 Result (Expected [1, 3]): [" << result2[0] << ", " << result2[1] << "]" << endl;

    // Test Case 3: [-10, -5, 1, 6, 9], target = 1 -> Expected [2, 4]
    vector<int> nums3 = {-10, -5, 1, 6, 9};
    int target3 = 1;
    vector<int> result3 = twoSum(nums3, target3);
    cout << "\nTest 3 Input: [-10, -5, 1, 6, 9], Target: 1" << endl;
    cout << "Test 3 Result (Expected [2, 4]): [" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;
}