#include<bits/stdc++.h>

using namespace std;

//Function to print pascals triangle
void printPascalsTriangle(int n){
    for(int i=0;i<n;i++){
        int number = 1;
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<number<<" ";
            number = number * (i - j) / (j + 1);
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printPascalsTriangle(n);
    return 0;
}