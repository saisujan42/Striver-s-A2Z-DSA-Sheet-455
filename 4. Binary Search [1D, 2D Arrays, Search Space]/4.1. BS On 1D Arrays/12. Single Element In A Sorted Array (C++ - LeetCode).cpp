// Approach 1 : Using Map TC : O(N) SC : O(N/2)


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int, int> Map;
        for(int i = 0; i < n; i++)
            Map[nums[i]]++;
        for(auto ch : Map)
            if(ch.second == 1)
                return ch.first;
        return 0;
    }
};



// Approach 2 : Brute Force TC : O(N) SC : O(1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                if(nums[i] != nums[i + 1])
                    return nums[i];
            }
            else if(i == n - 1) 
            {
                if(nums[i] != nums[i - 1])
                    return nums[i];
            }
            else 
            {
                if(nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
                    return nums[i];
            }
        }   
        return 0; 
    }
};


// Approach 3 : Using Xor TC : O(N) SC : O(1)


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        int Xor = 0;
        for(int i = 0; i < n; i++)
            Xor ^= nums[i];
        return Xor;
    }
};



// Approach 4 : Binary Search TC : O(LogN) SC : O(1)


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        if(nums[0] != nums[1])
            return nums[0];
        if(nums[n - 1] != nums[n - 2])
            return nums[n - 1];

        int Low = 1, High = n - 2, Mid;
        while(Low <= High)
        {
            Mid = (Low + High) / 2;
            if(nums[Mid] != nums[Mid - 1] && nums[Mid] != nums[Mid + 1])
                return nums[Mid];
            if((Mid % 2 != 0 && nums[Mid] == nums[Mid - 1]) ||
                (Mid % 2 == 0 && nums[Mid] == nums[Mid + 1]))
                Low = Mid + 1;
            else
                High = Mid - 1;
        }
        return -1;
    }
};