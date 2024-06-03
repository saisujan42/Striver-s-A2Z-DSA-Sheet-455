// Approach 1 : Linear Search TC : O(N) SC : O(1)

class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int n = nums.size();
        for(int i = 0; i < n; i++)
            if(nums[i] == target)
                return true;
        return false;    
    }
};


// Approach 2 : Binary Search TC : O(LogN) SC : O(1)


class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int Low = 0, High = n - 1, Mid;
        while(Low <= High)
        {
            Mid = (Low + High) / 2;
            if(nums[Mid] == target)
                return true;
            if(nums[Low] == nums[Mid] && nums[Mid] == nums[High])
            {
                Low++, High--;
                continue;
            }
            if(nums[Low] <= nums[Mid])
            {
                if(nums[Low] <= target && target <= nums[Mid])
                    High = Mid - 1;
                else
                    Low = Mid + 1;
            }
            else
            {
                if(nums[Mid] <= target && target <= nums[High])
                    Low = Mid + 1;
                else
                    High = Mid - 1;
            }
        }  
        return false;
    }
};