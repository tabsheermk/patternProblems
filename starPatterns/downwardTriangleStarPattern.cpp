#include<bits/stdc++.h>

using namespace std;

//Function to print downward triangle pattern
void printDownwardTriangleStarPattern(int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printDownwardTriangleStarPattern(n);
    return 0;
}