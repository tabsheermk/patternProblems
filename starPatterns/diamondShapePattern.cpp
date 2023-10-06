#include<bits/stdc++.h>

using namespace std;

//Function to print diamond shape pattern
void printDiamondShapePattern(int n){
    for(int i=0;i<n;i++){
        for(int k=n-i-1;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printDiamondShapePattern(n);
    return 0;
}