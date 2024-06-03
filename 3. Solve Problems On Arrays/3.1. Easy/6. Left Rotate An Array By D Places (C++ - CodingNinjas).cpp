// Approach 1 : Copying Elements To New Array

vector<int> rotateArray(vector<int>arr, int k) 
{
    int n = arr.size();
    vector<int> Answer(n);
    for(int i = 0; i < n; i++)
        Answer[i] = arr[(i + k) % n];
    return Answer;
}


// Approach 2 : Reversing Array

vector<int> rotateArray(vector<int>arr, int k) 
{
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
    return arr;
}
