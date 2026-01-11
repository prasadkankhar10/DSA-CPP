#include <iostream>
#include <climits>
using namespace std;


// this was a hard problem for in this i need to think of whice element to update fisrt it tock me many trys but i am not able to find its ans by only i have to tack help i need to look back in this after some thime 

int second_larget(int arr[], int n){

    if(n<2) return -1;

    int f_lar=INT_MIN;
    int s_lar=f_lar;

    for(int i=0;i<n;i++){
        if(arr[i]>f_lar){
            s_lar=f_lar;
            f_lar=arr[i];

        }else if(f_lar> arr[i] && arr[i]<s_lar){
            s_lar=arr[i];
        }
        
    }
    if(s_lar==INT_MIN) return -1;

    return s_lar;
}


int main(){
    int n=5;
    int arr[n]={2,4,5,8,10};

    cout << second_larget(arr,n)<< endl;
}
