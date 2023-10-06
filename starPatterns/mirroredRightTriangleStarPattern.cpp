#include<bits/stdc++.h>

using namespace std;

//Function to print mirrored right triangle star pattern
void printMirroredRightTriangleStarPattern(int n){
    for(int i=0;i<n;i++){
        for(int k=n-i-1;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printMirroredRightTriangleStarPattern(n);
    return 0;
}