#include <iostream>
#include <vector>
using namespace std;

int isSorted(vector<int>& arr) {
    // YOUR CODE HERE
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return -1;
        }
    }
    return 1;
}

int main() {
    vector<vector<int>> tests = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {1, 1, 3, 4},
        {10},
        {2, 4, 1, 5},
        {},
        {0, 0, 0}
    };
    
    for (int i = 0; i < tests.size(); ++i) {
        cout << "Test Case " << i + 1 << ": ";
        
        cout << "{";
        for (int j = 0; j < tests[i].size(); ++j) {
            cout << tests[i][j];
            if (j < tests[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "} -> ";
        
        int result = isSorted(tests[i]);
        cout << result << endl;
    }
    return 0;
}