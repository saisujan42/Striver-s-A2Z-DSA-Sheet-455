#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& a, int k)
{
    int n = a.size(), MaxLen = 0;
    map<long long, int> Map;
    long long Sum = 0;
    for(int i = 0; i < n; i++)
    {
        Sum += a[i];
        if(Sum == k)
            MaxLen = max(MaxLen, i + 1);
        long long RemainingSum = Sum - k;
        if(Map.find(RemainingSum) != Map.end())
        {
            int Length = i - Map[RemainingSum];
            MaxLen = max(MaxLen, Length);
        }
        if(Map.find(Sum) == Map.end())
            Map[Sum] = i;
    }
    return MaxLen;
}