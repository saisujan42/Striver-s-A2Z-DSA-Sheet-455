// Approach 1 : Using Map TC : O(N) SC : O(N)

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int Sum = 0, MaxLength = 0;
        unordered_map<int, int> Map;
        for(int i = 0; i < n; i++)
        {
            Sum += A[i];
            if(Sum == 0)
                MaxLength = i + 1;
            if(Map.find(Sum) != Map.end())
            {
                int Length = i - Map[Sum];
                MaxLength = max(Length, MaxLength);
            }
            else
                Map[Sum] = i;
        }
        return MaxLength;
    }
};



