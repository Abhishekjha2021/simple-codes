
#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
int main(){
    int arr[5];
    int minno=INT_MAX;
    int maxno=INT_MIN;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"The elements of array are"<<endl;
    for(int j=0;j<5;j++){
        cout<<arr[j]<<" ";
    }
    for(int k=0;k<5;k++){
        if(maxno<arr[k]){
            maxno=arr[k];
        }
        if(minno>arr[k]){
            minno=arr[k];
        }
    }
    cout<<"maximum and minimum no's are"<<endl;
    cout<<maxno<<" "<<minno;
    


    return 0;

    
}