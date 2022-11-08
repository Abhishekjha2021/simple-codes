
#include<iostream>
#include<math.h>
using namespace std;
int count=0 ;
int po;
int main(){
    int n;
    //int count =0;
    int sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n>0){
        
        int term=n%10;

        if(term>=0){
            count ++;
        }
         po=count;
        n=n/10;

    }

    cout<<po<<endl<<endl;
    cout<<"Again enter the number"<<endl;
        cin>>n;

    while(n>0){
        
        int rem=n%10;
        sum=sum+(pow(rem, po));

        n=n/10;
     }
     cout<<sum<<endl;
     
     if(sum==n){
         cout<<"It's an Armstrong number";
     }
     else{
         cout<<"It's not an Armstrong number";
     }

    
 
    return 0;
}
