class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n = nums.size();
        int MaxOnes = 0, CurrentMax = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 1)
                CurrentMax++;
            else
            {
                MaxOnes = max(MaxOnes, CurrentMax);
                CurrentMax = 0;
            }
        }  
        MaxOnes = max(MaxOnes, CurrentMax);  
        return MaxOnes;
    }
};