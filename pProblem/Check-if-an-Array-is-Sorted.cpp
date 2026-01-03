#include <bits/stdc++.h>
using namespace std;

/*
    Function to check if the array is sorted in non-decreasing order
*/
bool isSorted(int arr[], int n) {
    // write your logic here
    int i=0;
    while(i<n-1){
        if(arr[i]==arr[i+1]|| arr[i]<=arr[i+1]){
            i++;
        }else{
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << isSorted(arr, n) << endl;
    return 0;
}


//the right code is below but above is my attempt it is good and right but not optimal and to the point we can think of  Non-decreasing and in fail case we can return false directly without checking further elements

/*
    #include <bits/stdc++.h>
using namespace std;


    Function to check if the array is sorted in non-decreasing order

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << isSorted(arr, n) << endl;
    return 0;
}

*/