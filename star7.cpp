#include <iostream>
using namespace std;

int main() {
    int n;
    int count=1;
    cout<<"Ente n"<<endl;
    cin>>n;
    
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
    return 0;
}