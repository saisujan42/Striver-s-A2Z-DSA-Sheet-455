// Approach 1 : Using STL

class Solution {
public:
    void nextPermutation(vector<int> &nums)
    {
	next_permutation(nums.begin(), nums.end());
    }
};



// Approach 2 : Optimal Solution 

class Solution {
public:
    int FindIndex(vector<int> &nums, int &n)
    {
        for(int i = n - 2; i >= 0; i--)
        {
            if(nums[i] < nums[i + 1])
                return i;
        }
        return -1;
    }
    void nextPermutation(vector<int>& nums) 
    {
        int n = nums.size();
        int Index = FindIndex(nums, n);   
        if(Index == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        } 
        for(int i = n - 1; i > Index; i--)
        {
            if(nums[i] > nums[Index])
            {
                swap(nums[i], nums[Index]);
                break;
            }
        }
        reverse(nums.begin() + Index + 1, nums.end());
    }
};