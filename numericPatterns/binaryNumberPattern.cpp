#include<bits/stdc++.h>

using namespace std;

//Function to print binary number pattern
void printBinaryNumberPattern(int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            int num = 0;
            for(int j=1;j<=n;j++){
                cout<<num;
                num = (num == 0) ? 1 : 0;
            }
        }
        else{
            int num = 1;
            for(int j=1;j<=n;j++){
                cout<<num;
                num = (num == 0) ? 1 : 0;
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printBinaryNumberPattern(n);
    return 0;
}