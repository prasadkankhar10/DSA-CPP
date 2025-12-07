# include <iostream>
#include <climits>
using namespace std;

int swapmm(int arr[],int size){
    int s=INT_MAX;
    int p=INT_MIN;
    
    for(int i=0; i<size;i++){
        if(arr[i]<s){
            s=arr[i];
        }
        if(arr[i]>p){
            p=arr[i];
        }
    }
    return s+p;
}




int main(){
    int i=0,j=0,size=5;
    int tr=3;
    int arr[size]={1,2,3,4,5};
    int sum,pro;
    
    
    cout<< swapmm(arr,size);
    cout<< endl;

}