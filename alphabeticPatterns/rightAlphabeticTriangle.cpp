#include<bits/stdc++.h>

using namespace std;

//Function to print right alphabetic triangle
void printRightAlphabeticTriangle(int n){
    int alphabet = 65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(alphabet+j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printRightAlphabeticTriangle(n);
    return 0;
}