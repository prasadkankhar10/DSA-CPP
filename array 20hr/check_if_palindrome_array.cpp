#include <iostream>
#include <vector>
using namespace std;

int isPalindrome(vector<int>& arr) {
    // YOUR CODE HERE
    int i=0;
    int j=arr.size()-1;

    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }else{
            return 0;
        }
    }

    return 1;
}

int main() {
    vector<vector<int>> tests = {
        {1, 2, 1},
        {10, 20, 20, 10},
        {1, 2, 3},
        {5},
        {1, 2, 3, 4, 5},
        {9, 9, 9, 9, 9}
    };
    
    for (int i = 0; i < tests.size(); ++i) {
        cout << "Test Case " << i + 1 << ": ";
        
        cout << "[";
        for (int j = 0; j < tests[i].size(); ++j) {
            cout << tests[i][j];
            if (j < tests[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "]";
        
        int result = isPalindrome(tests[i]);
        cout << " -> Result: " << result << endl;
    }
    return 0;
}