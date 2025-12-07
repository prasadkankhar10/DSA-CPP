#include <iostream>
using namespace std;

void inter(int array1[],int array2[], int size){
    for(int i=0;i<size;i++){
        int c=0;
        for(int j=0; j<size;j++){
            if(array1[i]==array2[j]){
                c++;
            }
        }
        if(c>0){
            cout << array1[i] <<" ";
        }
    }
} 


int main(){
    int size=5;
    int arr1[size]{1,2,4,5,8};
    int arr2[size]={1,2,3,5,7};

    inter(arr1,arr2,size);
}