#include<bits/stdc++.h>
using namespace std;

int get_sl(vector<int> arr, int n){
    int l,sl = INT_MIN;


    for(auto it: arr){
        if(l < it){
            sl = l;
            l = it;
        }

        else if(sl < it && l > it) sl = it;
    }

    return sl;

}


int main(){
    int n;
    cin>>n;


    vector<int> arr;
    
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        arr.push_back(num);
    }

    cout<<"The given array is: "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The second maximum element is: "<< get_sl(arr,n);

    return 0;

    
}
