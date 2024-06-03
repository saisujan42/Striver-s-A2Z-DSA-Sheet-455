class Solution 
{
    public:
    bool check(vector<int>& nums) 
    {
        int n = nums.size();
        int Count = 0;
        for(int i = 1; i < n; i++)
        {
            if(nums[i - 1] > nums[i])
                Count++;
        } 
        if(nums[n - 1] > nums[0])
            Count++;
        return Count <= 1;
    }
};