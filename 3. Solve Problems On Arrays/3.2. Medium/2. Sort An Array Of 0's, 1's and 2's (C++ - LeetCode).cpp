// Approach 1 : Using STL Sort Function

class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
    }
};


// Approach 2 : Counting 0's, 1's and 2's

class Solution 
{
    public:
    void sortColors(vector<int>& nums) 
    {
        int n = nums.size();
        int Zero = 0, One = 0, Two = 0;
        for(auto Val : nums)
        {
            if(Val == 0)
                Zero++;
            else if(Val == 1)
                One++;
            else
                Two++;
        }
        for(int i = 0; i < Zero; i++)
            nums[i] = 0;
        for(int i = Zero; i < Zero + One; i++)
            nums[i] = 1;
        for(int i = Zero + One; i < n; i++)
            nums[i] = 2;
    }
};


// Approach 3 : 3 Pointer / Danish National Flag Algorithm O(N)

class Solution {
public:
    void Swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void sortColors(vector<int>& nums) 
    {
        int n = nums.size();
        int Low = 0, Mid = 0, High = n - 1;
        while(Mid <= High)
        {
            if(nums[Mid] == 0)
            {
                Swap(nums[Low], nums[Mid]);
                Low++, Mid++;
            }
            else if(nums[Mid] == 1)
                Mid++;
            else
            {
                Swap(nums[Mid], nums[High]);
                High--;
            }
        }    
    }
};