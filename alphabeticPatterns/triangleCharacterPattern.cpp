#include<bits/stdc++.h>

using namespace std;

//Function to print triangle character pattern
void printTriangleCharacterPattern(int n){
    for(int i=0;i<n;i++){
        int alphabet = 65;
        for(int k=n-i-1;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<char(alphabet+j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printTriangleCharacterPattern(n);
    return 0;
}