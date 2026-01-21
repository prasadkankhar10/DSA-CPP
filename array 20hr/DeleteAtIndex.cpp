#include <iostream>
using namespace std;

void deletell(int arr[],int& n,int pos){
    for(int i=pos; i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    int pos=3;
    

    for(int i=0; i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    deletell(arr,n,pos);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}