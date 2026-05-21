#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& nums){
			//your code goes here
            int n = nums.size();

            for(int  i=0;i<n-1;i++){
                if(nums[i+1] <  nums[i]) return false;

            }


            return true;
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

    // cout<<"The given array is: "<<endl;

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    cout<<"The array is sorted: "<< isSorted(arr);

    return 0;

    
}
