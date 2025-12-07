# include <iostream>
#include <climits>
using namespace std;

void swapmm(int arr[],int size){
    int s=INT_MAX;
    int p=INT_MIN;
    int mini=0,maxi=0;
    for(int i=0; i<size;i++){
        if(arr[i]<s){
            s=arr[i];
            mini=i;
            
        }
        if(arr[i]>p){
            p=arr[i];
            maxi=i;
        }
    }
    int temp= arr[mini];
    arr[mini]=arr[maxi];
    arr[maxi]=temp;
}




int main(){
    int i=0,j=0,size=5;
    int tr=3;
    int arr[size]={1,2,3,4,5};
    int sum,pro;
    
    cout << "Before: ";
    for(int i=0; i<size; i++) cout << arr[i] << " ";
    cout << endl;

    swapmm(arr, size);
    
    cout << "After:  ";
    for(int i=0; i<size; i++) cout << arr[i] << " ";
    cout<< endl;

}