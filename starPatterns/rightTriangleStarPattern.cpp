#include<bits/stdc++.h>

using namespace std;

//Function to print right traingle star pattern
void printRightTriangleStarPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printRightTriangleStarPattern(n);
    return 0;
}