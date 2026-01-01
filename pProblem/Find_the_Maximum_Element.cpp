#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5]={2,4,1,8,10};
    int n=5, min=INT_MIN;
    int i =0;
    for (i=0; i<n;i ++){
        if(arr[i]>min){
            min=arr[i];
        }
    }
    cout<< min<<endl;
}