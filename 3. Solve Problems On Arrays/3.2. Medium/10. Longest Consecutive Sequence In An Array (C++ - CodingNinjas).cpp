// Approach 1 : Sorting & Iteration O(NLogN)

int longestSuccessiveElements(vector<int>&a) 
{
    int n = a.size();
    sort(a.begin(), a.end());
    int Size = 1, MaxSize = 1;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] == a[i + 1])
            continue;
        else if(a[i] + 1 == a[i + 1])
            Size++;
        else
            Size = 1;
        MaxSize = max(MaxSize, Size);
    }
    return MaxSize;
}


// Approach 2 : Optimal Solution O(3N)

int longestSuccessiveElements(vector<int>&a) 
{
    int n = a.size();
    int Size = 1, MaxSize = 1;
    unordered_set<int> Set;
    for(int i = 0; i < n; i++)
        Set.insert(a[i]);
    for(auto Val : Set)
    {
        if(Set.find(Val - 1) == Set.end())
        {
            Size = 1;
            int Temp = Val;
            while(Set.find(Temp + 1) != Set.end())
                Temp++, Size++;
            MaxSize = max(MaxSize, Size);
        }
    }
    return MaxSize;
}