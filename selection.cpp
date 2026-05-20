<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> selectionSort(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int small = i;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[small] >= nums[j])
                {
                    small = j;
                }
            }

            if (small != i)
                swap(nums[small], nums[i]);
        }

        return nums;
    }
};
=======
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> selectionSort(vector<int> &nums)
    {
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int small = i;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[small] >= nums[j])
                {
                    small = j;
                }
            }

            if (small != i)
                swap(nums[small], nums[i]);
        }

        return nums;
    }
};
>>>>>>> 406e60c (Insertion Sort done)
