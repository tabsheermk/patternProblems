#include<bits/stdc++.h>

using namespace std;

//Function to print right triangle numeric pattern
void printRightTriangleNumericPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printRightTriangleNumericPattern(n);
    return 0;
}