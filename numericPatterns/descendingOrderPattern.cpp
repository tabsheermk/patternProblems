#include<bits/stdc++.h>

using namespace std;

//Function to print descending order pattern
void printDescendingOrderPattern(int n){
    for(int i=n;i>0;i--){
        for(int j=n;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printDescendingOrderPattern(n);
    return 0;
}