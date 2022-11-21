// Online C++ compiler to run C++ program online
#include <iostream>
int binarysearch(int arr[],int n,int key);
using namespace std;

int main() {
    int key;
    int arr[9]={4,9,25,32,41,45,46,50,55};
    int n=9;
    cout<<"Enter a key to search in array"<<endl;
    cin>>key;
    cout<<binarysearch(arr,n, key);
    return 0;
}
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    
    while(s<=e){
        int mid=(s+e)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}