#include<bits/stdc++.h>

using namespace std;

//Function to print alphabet pattern
void printAlphabetPattern(int n){
    int alphabet = 65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(alphabet+i)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printAlphabetPattern(n);
    return 0;
}