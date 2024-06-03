// Approach 1 : Two Pointers

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        int Start = 0, End = 1;
        while(End < n)
        {
            if(nums[Start] != nums[End])
            {
                Start++;
                nums[Start] = nums[End];
                End++;
            }
            else
                End++;
        }
        return Start + 1;
    }
};


// Approach 2 : Using Set

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n = nums.size();
        set<int> Set;
        for(int i = 0; i < n; i++)
            Set.insert(nums[i]);
        int i = 0;
        for(auto it : Set)
        {
            nums[i] = it;
            i++;
        } 
        return Set.size();
    }
};