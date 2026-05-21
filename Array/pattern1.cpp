#include<bits/stdc++.h>
using namespace std;


void func(int n ){
    // Print the grid of 9x9

    for(int i=1;i<=n/2+1;i++){
        for(int j =1;j<=i;j++){
            cout<<"*";
        }

        for(int j=i;j<=n-i-1;j++){
            cout<<" ";
        }

        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n/2;i>=1;i--){
        for(int j =1;j<=i;j++){
            cout<<"*";
        }

        for(int j=i;j<=n-i-1;j++){
            cout<<" ";
        }

        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return;
}

int main(){
    int n = 9;

    func(n);

    return 0;
}