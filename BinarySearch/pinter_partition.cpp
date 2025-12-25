#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool ispossible(vector<int> &arr, int n, int m, int mid){
    int pinter=1, time=0;
    for(int i=0;i<n;i++){
        if(time + arr[i]<=mid){
            time += arr[i];
        }else{
            pinter++;
            time= arr[i];
        }
    }
    return pinter <= m;
}


int minTimeTopinters(vector<int>& arr, int n, int m){
    int sum=0,maxVal=INT_MIN;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxVal=max(maxVal,arr[i]);
    }

    int st=maxVal,end=sum,ans=-1;
    while(st<=end){
        int mid= st + (end-st)/2;

        if(ispossible(arr,n,m,mid)){
            ans=mid;
            end= mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}



int main(){
    vector<int> arr={40,30,10,20};
    int n=arr.size(), m=3;

    cout << minTimeTopinters(arr,n,m)<<endl;
}