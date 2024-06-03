// Approach 1 : Using Set

#include <bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector <int> a, vector <int> b) 
{
    set<int> Set;
    for(auto it : a)
        Set.insert(it);
    for(auto it : b)
        Set.insert(it);

    int Size = Set.size();
    a.resize(Size);
    int i = 0;
    for(auto Val : Set)
    {
        a[i] = Val;
        i++;
    }   
    return a;
}


// Approach 2 : Two Pointer Technique

#include <bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector <int> a, vector <int> b) 
{
    vector<int> Answer;
    int n = a.size(), m = b.size();
    int i = 0, j = 0;

    while(i < n && j < m)
    {
        if(a[i] < b[j])
        {
            if(Answer.empty() || Answer.back() != a[i])
                Answer.push_back(a[i]);
            i++;
        }
        else
        {
            if(Answer.empty() || Answer.back() != b[j])
                Answer.push_back(b[j]);
            j++;
        }
    }

    while(i < n)
    {
        if(Answer.back() != a[i])
            Answer.push_back(a[i]);
        i++;
    }

    while(j < m)
    {
        if(Answer.back() != b[j])
            Answer.push_back(b[j]);
        j++;
    }
    return Answer;
}