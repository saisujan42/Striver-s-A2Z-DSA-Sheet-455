// Approach 1 : Two Pointer Technique

int longestSubarrayWithSumK(vector<int> a, long long k) 
{
    int n = a.size();
    long long Sum = 0;
    int Start = 0, End = 0, Size = 0;
    while(End < n)
    {
        if(Sum + a[End] == k)
        {
            Sum += a[End];
            Size = max(Size, End - Start + 1);
            End++;
        }
        else if(Sum + a[End] < k)
        {
            Sum += a[End];
            End++;
        }
        else if(Sum + a[End] > k)
        {
            Sum -= a[Start];
            Start++;
        }
    }
    return Size;
}


// Approach 2 : Using Map

#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) 
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

