#include<bits/stdc++.h>

using namespace std;

//Function to print simple number pattern
void printSimpleNumberPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printSimpleNumberPattern(n);
    return 0;
}