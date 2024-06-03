// Approach 1 : Iteration 

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int Low = 0, High = n - 1, Mid;
        while(Low <= High)
        {
            Mid = (Low + High) / 2;
            if(nums[Mid] == target)
                return Mid;
            else if(target > nums[Mid])
                Low = Mid + 1;
            else
                High = Mid - 1;
        }    
        return -1;
    }
};


// Approach 2 : Recursion

class Solution {
public:
    int BinarySearch(vector<int> &nums, int Low, int High, int target)
    {
        if(Low > High)
            return -1;
        int Mid = (Low + High) / 2;
        if(nums[Mid] == target)
            return Mid;
        else if(target > nums[Mid])
            return BinarySearch(nums, Mid + 1, High, target);
        else
            return BinarySearch(nums, Low, Mid - 1, target);
        return -1;
    }
    int search(vector<int>& nums, int target) 
    {
        int n = nums.size();
        return BinarySearch(nums, 0, n - 1, target);
    }
};