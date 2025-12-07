# include <iostream>

using namespace std;

void sumpro(int arr[],int size, int &sum,int &pro){
    sum=0;
    pro=1;
    for(int i=0; i<size;i++){
        sum=sum+arr[i];
        pro=pro*arr[i];
    }

}





int main(){
    int i=0,j=0,size=5;
    int tr=3;
    int arr[size]={1,2,3,4,5};
    int sum=0,pro=1;
    
    sumpro(arr,size,sum,pro);
    cout<< sum <<" "<< pro;
    cout<< endl;

}