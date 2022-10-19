#include<iostream>
using namespace std;
int main(){

    int row,col;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>row>>col;

    //printing star pattern when only rows are given-------------------------

    for(int i=1;i<=row;i++){
        for(int j =1;j<=col;j++){
            if(j==1||j==col){
                cout<<"*";

            }
            else if(i==1||i==row)
            {
            cout<<"*";
            }
            else{
                cout<<" ";
                //break;...---------don't usse it otherwise you will get wrong output.. 
            }

        }
        cout<<endl;
        
    }
    return 0;
}