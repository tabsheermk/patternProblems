#include<bits/stdc++.h>

using namespace std;

//Function to print down triangle pattern
void printDownTriangle(int n){
    for(int i=n;i>0;i--){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if((j == 1 || j == i) && i != n){
                cout<<"* ";
            }
            else if(i == n && j != i){
                cout<<"**";
            }
            else if(i == n && j == i){
                cout<<"*";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printDownTriangle(n);
    return 0;
}