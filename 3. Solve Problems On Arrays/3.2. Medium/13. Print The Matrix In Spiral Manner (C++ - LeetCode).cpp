// Approach 1 : Optimal Solution - 4 Pointers TC : O(N x M) SC : O(N x M)

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();  
        int Top = 0, Bottom = n - 1, Left = 0, Right = m - 1;
        vector<int> Answer;
        while(Top <= Bottom && Left <= Right)
        {
            for(int i = Left; i <= Right; i++)
                Answer.push_back(matrix[Top][i]);
            Top++;
            for(int i = Top; i <= Bottom; i++)
                Answer.push_back(matrix[i][Right]);
            Right--;
            if(Top <= Bottom)
                for(int i = Right; i >= Left; i--)
                    Answer.push_back(matrix[Bottom][i]);
            Bottom--;
            if(Left <= Right)
                for(int i = Bottom; i >= Top; i--)
                    Answer.push_back(matrix[i][Left]);
            Left++;
        }
        return Answer;
    }
};


// Approach 2 : Modified Optimal Solution TC : O(N-1 x M) SC : O(N - 1 x M)

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();  
        int Top = 0, Bottom = n - 1, Left = 0, Right = m - 1;
        while(Top <= Bottom && Left <= Right)
        {
            if(Top != 0)
            for(int i = Left; i <= Right; i++)
                matrix[0].push_back(matrix[Top][i]);
            Top++;
            for(int i = Top; i <= Bottom; i++)
                matrix[0].push_back(matrix[i][Right]);
            Right--;
            if(Top <= Bottom)
                for(int i = Right; i >= Left; i--)
                    matrix[0].push_back(matrix[Bottom][i]);
            Bottom--;
            if(Left <= Right)
                for(int i = Bottom; i >= Top; i--)
                    matrix[0].push_back(matrix[i][Left]);
            Left++;
        }
        return matrix[0];
    }
};