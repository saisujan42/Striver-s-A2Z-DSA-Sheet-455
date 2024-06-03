// Approach 1 : Sorting & Iteration O(N LogN)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 0)
            return 0;
        sort(nums.begin(), nums.end());
        int Size = 1, MaxSize = 1;
        for(int i = 0; i < n - 1; i++)
        {
            if(nums[i] == nums[i + 1])
                continue;
            else if(nums[i] + 1 == nums[i + 1])
                Size++;
            else
                Size = 1;
            MaxSize = max(MaxSize, Size);
        }    
        return MaxSize;
    }
};


// Approach 2 : Optimal Solution O(3N)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 0)
            return 0;
        unordered_set<int> Set;
        int Size = 1, MaxSize = 1;
        for(int i = 0; i < n; i++)
            Set.insert(nums[i]);
        for(auto Val : Set)
        {
            if(Set.find(Val - 1) == Set.end())
            {
                Size = 1;
                int Temp = Val;
                while(Set.find(Temp + 1) != Set.end())
                    Temp++, Size++;
                MaxSize = max(MaxSize, Size);
            }
        }
        return MaxSize;
    }
};