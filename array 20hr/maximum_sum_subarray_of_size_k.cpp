#include <iostream>
#include <vector>
#include <climits>
using namespace std;





long long max_sum_subarray_k(const vector<int>& arr, int k) {
    // YOUR CODE HERE
    int n=arr.size();
    int wsum=0,maxs=INT_MIN;

    for(int i=0;i<k;i++){
        wsum += arr[i];
    }

    maxs = max(maxs,wsum);

    for(int i=k;i<n;i++){
        wsum = wsum + arr[i]-arr[i-k];
        maxs= max(maxs,wsum);
    }
    return maxs;
}

int main() {
    // Test Case 1: Standard positive numbers
    vector<int> arr1 = {2, 1, 5, 1, 3, 2};
    int k1 = 3;
    long long expected1 = 9; // [5, 1, 3]
    long long result1 = max_sum_subarray_k(arr1, k1);
    cout << "Test 1 Input: arr=[2,1,5,1,3,2], K=" << k1 << endl;
    cout << "Test 1 Result: " << result1 << " (Expected: " << expected1 << ")" << endl;

    // Test Case 2: Larger numbers, boundary case (K=size)
    vector<int> arr2 = {100, 200, 300, 400};
    int k2 = 4;
    long long expected2 = 1000; 
    long long result2 = max_sum_subarray_k(arr2, k2);
    cout << "Test 2 Input: arr=[100,200,300,400], K=" << k2 << endl;
    cout << "Test 2 Result: " << result2 << " (Expected: " << expected2 << ")" << endl;

    // Test Case 3: Negative numbers involved
    vector<int> arr3 = {-5, 10, -2, 8, 1, 5};
    int k3 = 2;
    long long expected3 = 9; // [8, 1]
    long long result3 = max_sum_subarray_k(arr3, k3);
    cout << "Test 3 Input: arr=[-5,10,-2,8,1,5], K=" << k3 << endl;
    cout << "Test 3 Result: " << result3 << " (Expected: " << expected3 << ")" << endl;

    return 0;
}