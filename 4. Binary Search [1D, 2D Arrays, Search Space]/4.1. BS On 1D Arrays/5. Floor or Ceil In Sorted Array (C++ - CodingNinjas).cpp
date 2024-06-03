// Approach 1 : Linear Search TC : O(N) SC : O(1)


#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) 
{
    sort(arr.begin(), arr.end());
    int Floor = -1, Ceil = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] <= x)
            Floor = arr[i];
        if(arr[i] >= x && Ceil == -1)
            Ceil = arr[i];
    }
    return {Floor, Ceil};
}


// Approach 2 : Binary Search TC : O(LogN) SC : O(1)


#include<bits/stdc++.h>
using namespace std;

int getFloor(vector<int> &arr, int n, int x)
{
    int Answer = -1;
    int Low = 0, High = n - 1, Mid;
    while(Low <= High)
    {
        Mid = (Low + High) / 2;
		if(arr[Mid] == x)
			return arr[Mid];
        if(arr[Mid] <= x)
        {
            Answer = arr[Mid];
            Low = Mid + 1;
        }
        else
            High = Mid - 1;
    }
    return Answer;
}
int getCeil(vector<int> &arr, int n, int x)
{
    int Answer = -1;
    int Low = 0, High = n - 1, Mid;
    while(Low <= High)
    {
        int Mid = (Low + High) / 2;
		if(arr[Mid] == x)
			return arr[Mid];
        if(arr[Mid] >= x)
        {
            Answer = arr[Mid];
            High = Mid - 1;
        }
        else
            Low = Mid + 1;
    }
    return Answer;
}
pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) 
{
    int Floor = getFloor(arr, n, x);
    int Ceil = getCeil(arr, n, x);
    return {Floor, Ceil};
}