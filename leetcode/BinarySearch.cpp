#include <iostream>
#include <vector>
using namespace std;

int binSearch(vector<int> arr,int traget){
    int left=0, right=arr.size()-1;
    

    while(left<=right){
        int mid= left + (right - left) / 2;
        if(arr[mid]>traget){
            right=mid-1;
        }else if (arr[mid]<traget){
            left=mid+1;
        }else{
            return mid;
        }
    }
    return -1;
}


int main(){
    vector<int> arr= {10,20,30,40,50};
    int tr=70;

    cout<< binSearch(arr,tr);
}