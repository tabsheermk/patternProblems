#include<bits/stdc++.h>

using namespace std;

//Function to print reversed pyramid pattern
void printReversedPyramidPattern(int n){
    for(int i=n;i>0;i--){
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
    printReversedPyramidPattern(n);
    return 0;
}