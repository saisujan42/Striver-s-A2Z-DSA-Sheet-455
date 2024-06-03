// Approach 1 : Linear Search TC : O(N) SC : O(1)

class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if((i == 0 || nums[i - 1] < nums[i]) && (i == n - 1 || nums[i] > nums[i + 1]))
                return i;
        }    
        return -1;
    }
};


// Approach 2 : Binary Search TC : O(LogN) SC : O(1)

class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1)
            return 0;
        int Low = 0, High = n - 1, Mid;
        if(nums[Low] > nums[Low + 1])
            return Low;
        if(nums[High] > nums[High - 1])
            return High;
        Low = 1, High = n - 2;
        while(Low <= High)
        {
            Mid = (Low + High) / 2;
            if(nums[Mid] > nums[Mid - 1] && nums[Mid] > nums[Mid + 1])
                return Mid;
            if(nums[Mid] > nums[Mid - 1])
                Low = Mid + 1;
            else
                High = Mid - 1;
        }    
        return 0;
    }
};