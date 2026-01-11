#include <iostream>
#include <climits>
using namespace std;

int Larget_element(int arr[],int n){

    int lar=INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>=lar){
            lar=arr[i];
        }
    }

    return lar;
}

int main(){
    int n=6;
    int arr[n]={1,8,5,5,6,2};

    cout<< Larget_element(arr,n)<<endl;

}