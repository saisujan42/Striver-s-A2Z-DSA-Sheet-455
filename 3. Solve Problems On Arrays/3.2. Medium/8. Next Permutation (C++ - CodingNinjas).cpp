// Approach 1 : Using STL

vector<int> nextGreaterPermutation(vector<int> &A) 
{
    next_permutation(A.begin(), A.end());
    return A;
}


// Approach 2 : Optimal Solution 

int FindIndex(vector<int> &A, int &n)
{
    for(int i = n - 2; i >= 0; i--)
    {
        if(A[i] < A[i + 1])
            return i;
    }
    return -1;
}
vector<int> nextGreaterPermutation(vector<int> &A) 
{
    int n = A.size();
    int Index = FindIndex(A, n);
    if(Index == -1)
    {
        reverse(A.begin(), A.end());
        return A;
    }
    for(int i = n - 1; i > Index; i--)
    {
        if(A[i] > A[Index])
        {
            swap(A[i], A[Index]);
            break;
        }
    }
    reverse(A.begin() + Index + 1, A.end());
    return A;
}