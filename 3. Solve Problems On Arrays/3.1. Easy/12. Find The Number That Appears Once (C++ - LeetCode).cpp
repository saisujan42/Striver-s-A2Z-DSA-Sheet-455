// Approach 1 : Using Xor

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int Xor = 0;
        for(auto Val : nums)
            Xor ^= Val;
        return Xor;
    }
};


// Approach 2 : Sorting And Iteration

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1)
            return nums[0];
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == nums[i+1])
                i++;
	    else
                return nums[i];
        }
        return 0;
    }
};


// Approach 3 : Using Map

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        map<int, int> Map;
        for(auto Val : nums)
            Map[Val]++;
        for(auto Val : Map)
            if(Val.second == 1)
                return Val.first;
        return -1;    
    }
};