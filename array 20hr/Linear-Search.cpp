#include <iostream>
using namespace std;

int linearSecrch(int arr[],int n, int tar){
    for (int i=0; i<n;i++){
        if(arr[i]==tar){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int tar=5;

    cout<< linearSecrch(arr,n,tar)<< endl;
}