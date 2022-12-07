#include<iostream>
int sortedarray(int arr[],int n);
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    //cout<<sortedarray(arr,5);
    if(sortedarray(arr,5)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}
int sortedarray(int arr[],int n){
    if(n==0 || n==1){
        return 1;
    }
    if(arr[n-1]<arr[n-2]){
        return 0;
    }
    return sortedarray(arr,n-1);
}
