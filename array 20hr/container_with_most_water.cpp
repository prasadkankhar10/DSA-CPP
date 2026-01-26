#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxArea( vector<int>& height) {
    // YOUR CODE HERE
    int maxw=0;
    int l=0,r=height.size()-1;

    while(l<r){
        int wt=r-l;
        int h=min(height[l],height[r]);
        int cuw=wt*h;
        maxw=max(maxw,cuw);

        height[l]<height[r] ? l++ : r--;
    }
    return maxw;
}

int main() {
    vector<vector<int>> testCases = {
        {1, 8, 6, 2, 5, 4, 8, 3, 7}, // Expected: 49
        {1, 1},                      // Expected: 1
        {4, 3, 2, 1, 4},             // Expected: 16
        {2, 3, 4, 5, 18, 17, 6}      // Expected: 17
    };

    for ( auto& height : testCases) {
        cout << maxArea(height) << endl;
    }

    return 0;
}