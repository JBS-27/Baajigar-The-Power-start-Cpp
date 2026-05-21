#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();

        map<long long, int> prefixsum;

        long long sum =0;

        int ans = 0;

        for(int i=0;i<n;i++){
            sum += nums[i];

            if(sum == k){
                ans = max(ans,i+1);
            }

            long long rem = sum - k;

            if(prefixsum.find(rem) != prefixsum.end()){
                ans = max(ans,i-prefixsum[rem]);
            }

            if(prefixsum.find(sum) == prefixsum.end()) prefixsum[sum] = i;
        }


        return ans;
    }
};
