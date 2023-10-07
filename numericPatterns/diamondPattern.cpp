#include<bits/stdc++.h>

using namespace std;

//Function to print diamond pattern
void printDiamondPattern(int n){
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<i*2-1;j++){
            if(j < i){
                cout<<i-j;
            }else{
                cout<<j-i+2;
            }
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<i*2-1;j++){
            if(j < i){
                cout<<i-j;
            }else{
                cout<<j-i+2;
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printDiamondPattern(n);
    return 0;
}