// Approach 1 : Using DP O(N)

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();
        vector<int> Minimum(n);
        Minimum[0] = prices[0];
        int Answer = 0;
        for(int i = 1; i < n; i++)  
        {
            Minimum[i] = min(prices[i], Minimum[i - 1]);
            int Value = prices[i] - Minimum[i - 1];
            if(Value > 0)
                Answer = max(Answer, Value);
        }  
        return Answer;
    }
};