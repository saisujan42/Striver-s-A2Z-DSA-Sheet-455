// Approach 1 : Brute Force O(N^2) - TLE

long long maxSubarraySum(vector<int> arr, int n)
{
    long long Sum = LLONG_MIN;
    for(int i = 0; i < n; i++)
    {
        long long Current = 0;
        for(int j = i; j < n; j++)
        {
            Current += arr[j];
            Sum = max(Current, Sum);
        }
    }
    return Sum;
}


// Approach 2 : Kadane's Algorithm O(N)

#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    long long CurrentSum = 0, MaxSum = LLONG_MIN;
    for(int i = n - 1; i >= 0; i--)
    {
        CurrentSum = max(CurrentSum + arr[i], (long long)arr[i]);
        MaxSum = max(MaxSum, CurrentSum);
    }
    if(MaxSum < 0)
        return 0;
    return MaxSum;
}