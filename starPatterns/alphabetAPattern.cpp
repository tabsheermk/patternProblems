#include<bits/stdc++.h>

using namespace std;

//Function to print alphabet A pattern
//Need to be modified to do it in a more logical way but this is the most time efficient though as it just only prints 'A'
void printAlphabetAPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            if(i==0){
                cout<<"**";
                break;
            }
            else if(i==2){
                cout<<"***";
                break;
            }
            else{
                cout<<"* *";
                break;
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printAlphabetAPattern(n);
    return 0;
}