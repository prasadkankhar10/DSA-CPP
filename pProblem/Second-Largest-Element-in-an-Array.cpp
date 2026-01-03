#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
    Function to find the second largest distinct element
    Return -1 if it does not exist
*/
int secondLargest(int arr[], int n) {
    vector<int> max;
    max.push(INT_MIN);

    for(int i=0;i<n;i++){
        if(arr[i]<max[0]){
            max[1]=max.push(i);
        }
    }
}

int main() {
    int arr[] = {3, 7, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << secondLargest(arr, n) << endl;
    return 0;
}
