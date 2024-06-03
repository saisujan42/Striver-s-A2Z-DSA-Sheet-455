// Approach 1 : Brute Force TC : O(N^2) SC : O(1)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int Count = 0;
        for(int i = 0; i < n; i++)
        {
            int Sum = 0;
            for(int j = i; j < n; j++)
            {
                Sum += nums[j];
                if(Sum == k)
                    Count++;
            }
        }
        return Count;
    }
};


// Approach 2 : Prefix Sum  TC : O(N) SC : O(N)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int Count = 0, Sum = 0;
        map<int, int> Map;
        Map[0] = 1;
        for(int i = 0; i < n; i++)
        {
            Sum += nums[i];
            Count += Map[Sum - k];
            Map[Sum]++;
        }
        return Count;
    }
};

