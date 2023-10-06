#include<bits/stdc++.h>

using namespace std;

//Function to print triangle star pattern
void printTriangleStarPattern(int n){
    for(int i=0;i<n;i++){
        for(int k=n-i-1;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if((j == i || j == 0) && i!=n-1)
                cout<<"* ";
            else if(i == n-1 && j != i){
                cout<<"**";
            }
            else if(i == n-1 && j == i){
                cout<<"*";   
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    printTriangleStarPattern(n);
    return 0;
}
