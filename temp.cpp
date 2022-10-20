#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[8]={10,7,4,6,8,10,7,11};
    int cd=arr[1]-arr[0];
    int count=1;
    int ans=2;
    int mx;
    for(int i=0;i<8;i++){
        if(cd==arr[i+1]-arr[i]){
            count++;
        }
        else{
            cd=arr[i+1]-arr[i];
            count=1;
        }
        ans=max(ans,count);

    }
    cout<<ans;
    cout<<"Yes";
    
    return 0;
}