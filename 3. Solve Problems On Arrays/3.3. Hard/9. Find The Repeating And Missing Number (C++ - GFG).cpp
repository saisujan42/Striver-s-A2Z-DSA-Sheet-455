// Approach 1 : Brute Force TC : O(N^2) SC : O(1)

class Solution
{
    public:
    vector<int> findTwoElement(vector<int> arr, int n) 
    {
        int Missing, Repeated;
        for(int i = 1; i <= n; i++)
        {
            int Count = 0;
            for(int j = 0; j < n; j++)
            {
                if(arr[j] == i)
                    Count++;
            }
            if(Count == 0)
                Missing = i;
            if(Count == 2)
                Repeated = i;
        }
        return {Repeated, Missing};
    }
};


// Approach 2 : Using Map TC :O(2N) SC :O(N)

class Solution
{
    public:
    vector<int> findTwoElement(vector<int> arr, int n) 
    {
        int Missing, Repeated;
        unordered_map<int, int> Map;
        for(int i = 0; i < n; i++)
        {
            Map[arr[i]]++;
            if(Map[arr[i]] == 2)
                Repeated = arr[i];
        }
        for(int i = 1; i <= n; i++)
        {
            Map[i]++;
            if(Map[i] == 1)
                return {Repeated, i};
        }
        return {Repeated, Missing};
    }
};


// Approach 3 : Optimal Solution - Using Math TC : O(N) SC : O(1)

class Solution
{
    public:
    vector<int> findTwoElement(vector<int> arr, int n) 
    {
        long long int ArrSum = 0, SqSum = 0, NSum = 0, NSqSum = 0;
        for(int i = 0; i < n; i++)
        {
            ArrSum += arr[i];
            SqSum += ((long long int)arr[i] * (long long int)arr[i]);
        }
        NSum = ((long long int)n * (long long int)(n + 1)) / 2;
        NSqSum = ((long long int)n * (long long int)(n + 1) * (long long int)(2*n + 1)) / 6;
        long long int X = ArrSum - NSum;
        long long int Y = (SqSum - NSqSum) / X;
        int Repeated = (X + Y) / 2;
        int Missing = Y - Repeated;
        return {Repeated, Missing};
    }
};