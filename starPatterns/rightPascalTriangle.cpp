#include<bits/stdc++.h>

using namespace std;

//Function to print right pascal triangle
void printRightPascalTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printRightPascalTriangle(n);
    return 0;
}