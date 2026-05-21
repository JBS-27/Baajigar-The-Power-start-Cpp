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



// Second approach 

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        
        int n = nums.size();

        int right=0;
        int left = 0;

        long long sum = nums[0];

        int ans = 0;

        while(right < n){
            while(left <= right && sum > k){
                sum -= nums[left];
                left++;
            }

            if(sum == k){
                ans = max(ans,right-left+1);
            }

            right++;
            if(right < n) sum += nums[right];
        }


        return ans;
    }
};
