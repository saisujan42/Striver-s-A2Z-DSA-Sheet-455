// Approach 1 : Brute Force O(N^2) - TLE

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int MaxValue = 0, MaxFreq = 0;
        for(int i = 0; i < n; i++)
        {
            int Count = 0;
            for(int j = 0; j < n; j++)
                if(nums[i] == nums[j])
                    Count++;
            if(Count > MaxFreq)
                MaxValue = nums[i], MaxFreq = Count;
        }
        return MaxValue;
    }
};


// Approach 2 : Using Map TC : O(N) SC : O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        map<int, int> Map;
        for(int i = 0; i < n; i++)
            Map[nums[i]]++;
        for(auto Itr : Map)
            if(Itr.second > n / 2)
                return Itr.first;
        return 0;
    }
};


// Approach 3 : Moore's Voting Algorithm TC : O(N) SC: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int Value, Count = 0;
        for(int i = 0; i < n; i++)
        {
            if(Count == 0)
                Value = nums[i], Count++;
            else if(nums[i] == Value)
                Count++;
            else
                Count--;
        }
        return Value;
    }
};
