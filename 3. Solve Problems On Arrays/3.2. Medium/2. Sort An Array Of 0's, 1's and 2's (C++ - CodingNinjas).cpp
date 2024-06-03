// Approach 1 : Using In-Built Sort Function

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    sort(arr.begin(), arr.end());
}


// Approach 2 : Counting 0's, 1's and 2's

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    int Zero = 0, One = 0, Two = 0;
    for(auto Val : arr)
    {
        if(Val == 0)
            Zero++;
        else if(Val == 1)
            One++;
        else
            Two++;
    }
    for(int i = 0; i < Zero; i++)
        arr[i] = 0;
    for(int i = Zero; i < Zero + One; i++)
        arr[i] = 1;
    for(int i = Zero + One; i < n; i++)
        arr[i] = 2;
}


// Approach 3 : 3 Pointer / Danish National Flag Algorithm O(N)

#include <bits/stdc++.h> 
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sortArray(vector<int>& arr, int n)
{
    int Low = 0, Mid = 0, High = n - 1;
    while(Mid <= High)
    {
        if(arr[Mid] == 0)
        {
            Swap(arr[Low], arr[Mid]);
            Low++, Mid++;
        }
        else if(arr[Mid] == 1)
            Mid++;
        else
        {
            Swap(arr[Mid], arr[High]);
            High--;
        }
    }
}