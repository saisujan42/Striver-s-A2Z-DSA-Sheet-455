// Approach 1 : Brute Force TC : O(N^2) SC : O(1)


class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n = nums.size();
        int Product, Answer = nums[0];
        for(int i = 0; i < n; i++)
        {
            Product = nums[i];
            Answer = max(Product, Answer);
            for(int j = i + 1; j < n; j++)
            {
                Product *= nums[j];
                Answer = max(Answer, Product);
            }
        }
        return Answer;
    }
};



// Approach 2 : Prefix & Suffix  TC : O(N) SC : O(1)


class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n = nums.size();
        int Prefix = 1, Suffix = 1, Answer = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if(Prefix == 0)
                Prefix = 1;
            if(Suffix == 0)
                Suffix = 1;
            Prefix *= nums[i];
            Suffix *= nums[n - i - 1];
            Answer = max(Answer, max(Prefix, Suffix));
        }
        return Answer;
    }
};