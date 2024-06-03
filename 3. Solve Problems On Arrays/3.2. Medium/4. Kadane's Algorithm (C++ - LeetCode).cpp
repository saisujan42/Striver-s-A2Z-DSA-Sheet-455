// Approach 1 : Brute Force O(N^2) - TLE

class Solution 
{
    public:
    int maxSubArray(vector<int>& nums) 
    {
        int n = nums.size();
        int Sum = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            int CurrentSum = 0;
            for(int j = i; j < n; j++)
            {
                CurrentSum += nums[j];
                Sum = max(Sum, CurrentSum);
            }
        } 
        return Sum;
    }
};


// Approach 2 : Kadane's Algorithm O(N)

class Solution 
{
    public:
    int maxSubArray(vector<int>& nums) 
    {
        int n = nums.size();
        int CurrSum = 0, MaxSum = INT_MIN;
        for(int i = n - 1; i >= 0; i--)
        {
            CurrSum = max(CurrSum + nums[i], nums[i]);
            MaxSum = max(MaxSum, CurrSum);
        }
        return MaxSum;
    }
};w