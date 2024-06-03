// Approach 1 : Iteration O(n)

int isSorted(int n, vector<int> a) 
{
    for(int i = 0; i < n - 1; i++)
        if(a[i] > a[i + 1])
            return 0;
    return 1;
}


// Approach 2 : Sorting O(nLogn)

int isSorted(int n, vector<int> a) 
{
    vector<int> b = a;
    sort(b.begin(), b.end());
    if(b == a)
        return 1;
    return 0;
}
