// Approach 1 : Brute Force O(n^2)

string read(int n, vector<int> book, int target)
{
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(book[i] + book[j] == target)
                return "YES";
    return "NO";
}


// Approach 2 : Using Map O(N LogN)

#include <bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target)
{
    map<int, int> Map;
    for(int i = 0; i < n; i++)
    {
        int Key = target - book[i];
        if(Map.find(Key) != Map.end())
            return "YES";
        Map[book[i]] = i;
    }
    return "NO";
}


// Approach 3 : Two Pointer Technique O(NLogN)

string read(int n, vector<int> book, int target)
{
    sort(book.begin(), book.end());
    int Start = 0, End = n - 1;
    while(Start < End)
    {
        if(book[Start] + book[End] == target)
            return "YES";
        if(book[Start] + book[End] < target)
            Start++;
        else
            End--;
    }
    return "NO";
}

