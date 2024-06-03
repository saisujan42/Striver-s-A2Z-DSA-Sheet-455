// Approach 1 : Iterative Code

vector<int> reverseArray(int n, vector<int> &nums)
{
    for(int i = 0, j = n - 1; i <= j; i++, j--)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    return nums;
}


// Approach 2 : Recursive Code

void Reverse(int i, vector<int> &Answer, vector<int> &nums)
{
    if(i < 0)
        return;
    Answer.push_back(nums[i]);
    Reverse(i - 1, Answer, nums);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    vector<int> Answer;
    Reverse(n - 1, Answer, nums);
    return Answer;
}
