#include<bits/stdc++.h>

using namespace std;

//Function to print diamond pattern
void printDiamondPattern(int n){
    for(int i=0;i<n;i++){
        int alphabet = 65;
        for(int k=n-i-1;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(j == 0 || j == i){
                cout<<char(alphabet+i)<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int i=n-2;i>=0;i--){
        int alphabet = 65;
        for(int k=n-i-1;k>0;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if( j == 0 || j == i){
                cout<<char(alphabet+i)<<" ";
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
    printDiamondPattern(n);
    return 0;
}