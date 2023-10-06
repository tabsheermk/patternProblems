#include<bits/stdc++.h>

using namespace std;

//Function to print sandglass star pattern
void printSandglassStarPattern(int n){
    for(int i=n;i>0;i--){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int k=n-i;k>1;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printSandglassStarPattern(n);
    return 0;
}