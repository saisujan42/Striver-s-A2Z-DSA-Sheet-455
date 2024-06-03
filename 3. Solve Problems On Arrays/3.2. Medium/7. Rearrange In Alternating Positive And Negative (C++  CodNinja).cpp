// Approach 1 : 2 Pointer Optimal O(N)

vector<int> alternateNumbers(vector<int> &a) 
{
    int n = a.size(), Positive = 0, Negative = 1;
    vector<int> Answer(n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
            Answer[Positive] = a[i], Positive += 2;
        else
            Answer[Negative] = a[i], Negative += 2;
    }
    return Answer;
}