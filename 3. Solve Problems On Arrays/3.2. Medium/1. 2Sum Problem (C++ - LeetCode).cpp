// Approach 1 : Brute Force O(n^2)

class Solution 
{
    public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(nums[i] + nums[j] == target)
                return {i, j};
        return {-1};
    }
};


// Approach 2 : Using Map O(N LogN)

class Solution 
{
    public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        map<int, int> Map;
        for(int i = 0; i < n; i++)
        {
            int Key = target - nums[i];
            if(Map.find(Key) != Map.end())
                return {Map[Key], i};
            Map[nums[i]] = i;
        }
        return {-1};
    }
};