// Approach 1 : Using nCr TC : O(N^2) SC : O(N^2)

class Solution {
public:
    vector<int> GenerateRow(int n)
    {
        vector<int> Row;
        long long int Ans = 1;
        Row.push_back(1);
        for(int i = 1; i < n; i++)
        {
            Ans = Ans * (n - i);
            Ans /= i;
            Row.push_back(Ans);
        }
        return Row;
    }
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> Answer;  
        for(int i = 1; i <= numRows; i++)
            Answer.push_back(GenerateRow(i));
        return Answer;  
    }
};


// Approach 2 : DP Approach TC : O(N^2) SC : O(N^2)


class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> Answer;
        for(int i = 0; i < numRows; i++)
        {
            vector<int> Row;
            Row.push_back(1);
            for(int j = 1; j < i; j++)
                Row.push_back(Answer[i - 1][j - 1] + Answer[i - 1][j]);
            if(i != 0)
                Row.push_back(1);
            Answer.push_back(Row);
        }    
        return Answer;
    }
};