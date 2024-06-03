// Optimal Solutin O(N)

vector<int> superiorElements(vector<int>&a) 
{
    int n = a.size();
    int Maximum = INT_MIN;
    vector<int> Answer;
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] > Maximum)
        {
            Answer.push_back(a[i]);
            Maximum = a[i];
        }
    }
    return Answer;
}