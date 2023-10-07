#include<bits/stdc++.h>

using namespace std;

//Function to print zero/one pattern
void printZeroOnePattern(int n){
    for(int i=1;i<=n;i++){
        int num = 1;
        for(int j=1;j<=i;j++){
            cout<<num;
            num = (num == 0) ? 1 : 0;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printZeroOnePattern(n);
    return 0;
}