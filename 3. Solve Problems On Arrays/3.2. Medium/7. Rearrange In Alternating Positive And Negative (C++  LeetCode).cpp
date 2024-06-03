// Approach 1 : 2 Pointer Optimal O(N)

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int n = nums.size(), Positive = 0, Negative = 1;
        vector<int> Answer(n);
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > 0)
                Answer[Positive] = nums[i], Positive += 2;
            else
                Answer[Negative] = nums[i], Negative += 2;
        }
        return Answer;
    }
};