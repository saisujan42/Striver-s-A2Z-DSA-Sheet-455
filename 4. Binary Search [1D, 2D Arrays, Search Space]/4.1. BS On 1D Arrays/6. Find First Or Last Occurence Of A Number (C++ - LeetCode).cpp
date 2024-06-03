// Approach 1 : Linear Search TC : O(N) SC : O(1)


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int Start = -1, End = -1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == target && Start == -1)
                Start = i, End = i;
            else if(nums[i] == target && Start != -1)
                End = i;
        }    
        return {Start, End};
    }
};


// Approach 2 : Binary Search TC : O(2LogN) SC : O(1)

class Solution {
public:
    int FindStart(vector<int> &nums, int n, int target)
    {
        int Low = 0, High = n - 1, Mid;
        int Start = -1;
        while(Low <= High)
        {
            Mid = (Low + High) / 2;
            if(nums[Mid] == target)
                Start = Mid, High = Mid - 1;
            else if(nums[Mid] < target)
                Low = Mid + 1;
            else
                High = Mid - 1;
        }
        return Start;
    }
    int FindEnd(vector<int> &nums, int n, int target)
    {
        int Low = 0, High = n - 1, Mid;
        int End = -1;
        while(Low <= High)
        {
            Mid = (Low + High) / 2;
            if(nums[Mid] == target)
                End = Mid, Low = Mid + 1;
            else if(nums[Mid] < target)
                Low = Mid + 1;
            else
                High = Mid - 1;
        }
        return End;
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int Start = FindStart(nums, n, target);
        if(Start == -1)
            return {-1, -1};
        int End = FindEnd(nums, n, target);
        return {Start, End};    
    }
};