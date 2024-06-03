// Approach 1 : Two Pointer Technique

class Solution {
public:
    void Swap(int &Start, int &End, vector<int> &nums)
    {
        nums[Start] = nums[End];
        nums[End] = 0;
        Start++;
        End++;
    }
    void moveZeroes(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1)
            return;
        int Start = 0, End = 0;
        for(int i = 0; i < n && nums[i] != 0; i++)
            Start++;
        End = Start + 1;
        while(Start < n && End < n)
        {
            if(nums[End] != 0)
                Swap(Start, End, nums);
            else
                End++;
        }    
    }
};


// Approach 2 : Copying Non-Zero Elements To New Array

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        vector<int> v;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            if(nums[i] != 0)
                v.push_back(nums[i]);

        for(int i = 0; i < v.size(); i++)
            nums[i] = v[i];
        for(int i = v.size(); i < n; i++)
            nums[i] = 0;
    }
};