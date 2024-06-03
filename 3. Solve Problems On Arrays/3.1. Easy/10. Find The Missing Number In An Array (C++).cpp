// Approach 1 : By Using Sum

class Solution 
{
    public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int ArrSum = 0;
        for(int i = 0; i < n; i++)
            ArrSum += nums[i];
        int Sum = n * (n + 1) / 2;
        return Sum - ArrSum;
    }
};


// Approach 2 : By Using XOR

class Solution 
{
    public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int Xor = 0;
        for(int i = 0; i < n; i++)
            Xor ^= (i ^ nums[i]);
        return Xor ^ n;
    }
};


// Approach 3 : By Sorting And Iterating

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n - 1; i++)
        {
            if(nums[i] != nums[i+1] - 1)
                return nums[i]+1;
        }
        if(nums[0]!=0)
            return 0;
        return n;
    }
};