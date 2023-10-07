#include<bits/stdc++.h>

using namespace std;

//Function to print the row number pattern
void printRowNumberPattern(int n){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printRowNumberPattern(n);
    return 0;
}