#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,1,1,5,6,7,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=1;
    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }
        cout<<arr[i]<<" "<<count<<endl;
    }
    return 0;
}