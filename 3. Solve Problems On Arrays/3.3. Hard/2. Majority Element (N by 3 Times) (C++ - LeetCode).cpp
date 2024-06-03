// Approach 1 : Using Map TC : O(2N) SC : O(N)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
	vector<int> Answer;
        unordered_map<int, int> Map;
        for(int i = 0; i < n; i++)
            Map[nums[i]]++;
        for(auto ch : Map)
        {
            if(ch.second > (n/3))
                Answer.push_back(ch.first);
        }
        return Answer;
    }
};



// Approach 2 : Using Map TC : O(N) SC : O(N)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        map<int, int> Map;
        vector<int> Answer;
        for(int i = 0; i < n; i++)
        {
            Map[nums[i]]++;
            if(Map[nums[i]] == (n/3) + 1)
                Answer.push_back(nums[i]);
        }    
        sort(Answer.begin(), Answer.end());   // O(2 Log2)
        return Answer;
    }
};


// Approach 3 : Modified Moore's Voting Algorithm TC : O(N) SC : O(1)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        int Count1 = 0, Count2 = 0, Element1 = INT_MIN, Element2 = INT_MIN;
        for(int i = 0; i < n; i++) 
        {
            if(Count1 == 0 && Element2 != nums[i])
                Element1 = nums[i], Count1++;
            else if(Count2 == 0 && Element1 != nums[i])
                Element2 = nums[i], Count2++;
            else if(Element1 == nums[i])
                Count1++;
            else if(Element2 == nums[i])
                Count2++;
            else
                Count1--, Count2--;
        }   
        
        Count1 = Count2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == Element1) Count1++;
            if(nums[i] == Element2) Count2++;
        }
        if(Count1 > n/3 && Count2 > n/3)
            return {Element1, Element2};
        if(Count1 > n/3)
            return {Element1};
        if(Count2 > n/3)
            return {Element2};
        return {};
    }
};