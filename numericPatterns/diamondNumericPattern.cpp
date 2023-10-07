#include<bits/stdc++.h>

using namespace std;

//Function to print diamond numeric pattern
void printDiamondNumericPattern(int n){
    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int k=1;k<i;k++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printDiamondNumericPattern(n);
    return 0;
}