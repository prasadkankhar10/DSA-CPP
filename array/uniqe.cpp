#include <iostream>
using namespace std;

void uniqe(int arr[],int size){
    for(int i=0;i<size;i++){

        int c=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c==1){
            cout<< arr[i];
        }
    }

}


int main(){
    int size=7,i=0,j=0;
    int arr[size] = {1, 2, 2, 3, 4, 4, 5};

    uniqe(arr,size);
}