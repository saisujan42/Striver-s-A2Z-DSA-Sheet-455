// Approach 1 : Linear Search TC : O(N) SC : O(1)


class Solution
{
    public:	
	int count(int arr[], int n, int x) 
	{
	    int Count = 0;
	    for(int i = 0; i < n; i++)
	        if(arr[i] == x)
	            Count++;
	   return Count;
	}
};


// Approach 2 : Binary Search TC : O(2LogN) SC : O(1)

class Solution
{
    public:	
    int FindStart(int arr[], int n, int x)
    {
        int Low = 0, High = n - 1, Mid;
        int Start = -1;
        while(Low <= High)
        {
            Mid = (Low + High) / 2;
            if(arr[Mid] == x)
                Start = Mid, High = Mid - 1;
            else if(arr[Mid] < x)
                Low = Mid + 1;
            else
                High = Mid - 1;
        }
        return Start;
    }
    int FindEnd(int arr[], int n, int x)
    {
        int Low = 0, High = n - 1, Mid;
        int End = -1;
        while(Low <= High)
        {
            Mid = (Low + High) / 2;
            if(arr[Mid] == x)
                End = Mid, Low = Mid + 1;
            else if(arr[Mid] < x)
                Low = Mid + 1;
            else
                High = Mid - 1;
        }
        return End;
    }
	int count(int arr[], int n, int x) 
	{
	    int Start = FindStart(arr, n, x);
	    if(Start == -1)
	        return 0;
	    int End = FindEnd(arr, n, x);
	    return End - Start + 1;
	}
};