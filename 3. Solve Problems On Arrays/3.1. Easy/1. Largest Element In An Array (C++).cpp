// Approach 1 : In-Built Function

#include <bits/stdc++.h> 
using namespace std;

int largestElement(vector<int> &arr, int n) 
{
    return *max_element(arr.begin(), arr.end());
}


// Approach 2 : Iteration O(n)

#include <bits/stdc++.h> 
using namespace std;

int largestElement(vector<int> &arr, int n) 
{
    int MaxValue = INT_MIN;
    for(int i = 0; i < n; i++)
        MaxValue = max(MaxValue, arr[i]);
    return MaxValue;
}
