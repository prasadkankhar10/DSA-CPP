#include <iostream>
using namespace std;

void insert(int arr[], int &n, int pos,int val){


    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }

    arr[pos]=val;
    n++;
}


int main(){
    int arr[10]={1,2,3,4,5};
    int n=5;

    int pos=2;
    int val=33;
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<< endl;
    cout <<n<<endl;
    insert(arr,n,pos,val);
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}