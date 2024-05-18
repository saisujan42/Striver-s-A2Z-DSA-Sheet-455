class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long Left = 0, Right = 0, Answer = 0;
        long long Sum = nums[0];
        while(Right < n)
        {
            if ( (Right - Left + 1) * nums[Right] <= k + Sum)
            {
                Answer = max(Answer, Right - Left + 1);
                Right++;
                if(Right < n)
                Sum += nums[Right];
            }
            else
            {
                Sum -= nums[Left];
                Left++;
            }
        }
        return Answer;
    }
};