#include<iostream>
#include<math.h>
int sum(int n,int p);
using namespace std;
int main(){
    cout<<sum(5,4);
    return 0;
}
int sum(int n,int p){
    
    if(p==0){
        return 1;
    }
    int prevfact=pow(n,p-1);
    return n*prevfact;
}