#include<bits/stdc++.h>

using namespace std;

//Function to print K shape pattern
void printKShapePattern(int n){
    for(int i=n;i>0;i--){
        int alphabet = 65;
        for(int j=0;j<i;j++){
            cout<<char(alphabet + j)<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        int alphabet = 65;
        for(int j=0;j<=i;j++){
            cout<<char(alphabet+j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printKShapePattern(n);
    return 0;
}