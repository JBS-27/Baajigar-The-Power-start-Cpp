#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();

        for(int i = 1;i<n;i++){
            int j =i-1;
            int small = nums[i];


            while(j >= 0 && nums[j] > small){
                nums[j+1] = nums[j];
                j--;
            }

            nums[j+1] = small;
        }

        return nums;
    }
};
