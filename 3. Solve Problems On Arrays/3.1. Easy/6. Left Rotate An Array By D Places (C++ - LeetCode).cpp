// Approach 1 : By Reversing The Array TC : O(2n) & SC : O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};


// Approach 2 : Copying To New Array TC : O(n) & SC : O(n)

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> Answer(n);
        k %= n;
        for(int i = 0; i < n; i++)
            Answer[(i + k) % n] = nums[i];  
        nums = Answer;
    }
};