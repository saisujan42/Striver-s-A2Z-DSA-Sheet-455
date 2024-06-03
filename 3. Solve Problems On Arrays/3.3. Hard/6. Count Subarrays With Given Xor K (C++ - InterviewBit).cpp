// Approach 1 : Brute Force TC : O(N^2) SC : O(1)

int Solution::solve(vector<int> &A, int B) 
{
    int n = A.size();
    int Count = 0, Xor = 0;
    for(int i = 0; i < n; i++)
    {
        Xor = A[i];
        if(Xor == B)
            Count++;
        for(int j = i + 1; j < n; j++)
        {
            Xor ^= A[j];
            if(Xor == B)
                Count++;
        }
    }
    return Count;
}


// Approach 2 : Using Map TC : O(N) SC : O(N)


int Solution::solve(vector<int> &A, int B) 
{
    int n = A.size();
    int Count = 0, Xor = 0;
    unordered_map<int, int> Map;
    Map[0] = 1;
    for(int i = 0; i < n; i++)
    {
        Xor ^= A[i];
        Count += Map[Xor ^ B];
        Map[Xor]++;
    }
    return Count;
}
