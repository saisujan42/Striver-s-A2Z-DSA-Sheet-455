// Approach 1 : Linear Search TC : O(N) SC : O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int Answer = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == target)
                return i;
            if(nums[i] <= target)
                Answer = i + 1;
        }   
        return Answer; 
    }
};



// Approach 2 : Binary Search TC : O(LogN) SC : O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int Answer = n;
        int Low = 0, High = n - 1, Mid;
        while(Low <= High)
        {
            Mid = (Low + High) / 2;
            if(nums[Mid] == target)
                return Mid;
            if(nums[Mid] >= target)
            {
                Answer = Mid;
                High = Mid - 1;
            }
            else
                Low = Mid + 1;
        }   
        return Answer; 
    }
};