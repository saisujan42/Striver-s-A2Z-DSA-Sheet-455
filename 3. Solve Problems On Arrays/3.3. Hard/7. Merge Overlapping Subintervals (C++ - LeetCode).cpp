// Approach 1 : Sorting & Iteration TC : O(NLogN + N) SC : O(N)


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> Answer;
        Answer.push_back(intervals[0]);
        for(int i = 1; i < n; i++)
        {
	    int Start = intervals[i][0];
	    int End = intervals[i][1];
            if(Start <= Answer.back()[1] && End > Answer.back()[1])
                Answer.back()[1] = End;
	    else if(Start <= Answer.back()[1])
		continue;
            else
                Answer.push_back(intervals[i]);
        }  
        return Answer;
    }
};