// Approach 1 : Using 2 Vectors To Store Indices of 0s TC : O(N^2) SC : O(2N)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> Row, Column;

        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
            if(matrix[i][j] == 0)
            {
                Row.push_back(i);
                Column.push_back(j);
            }
    
        for(int i = 0; i < Row.size(); i++)
        {
            int k = Row[i];
            for(int j = 0; j < m; j++)
                matrix[k][j] = 0;
            k = Column[i];
            for(int j = 0; j < n; j++)
                matrix[j][k] = 0;
        }
    }
};


// Approach 2 : Optimal Solution TC : O(N^2) SC : O(1)


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int Column = 1;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    if(j == 0)
                        Column = 0;
                    else
                        matrix[0][j] = 0;
                }
            }
        }

        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        if(matrix[0][0] == 0)
            for(int i = 0; i < m; i++)
                matrix[0][i] = 0;

        if(Column == 0)
            for(int i = 0; i < n; i++)
                matrix[i][0] = 0;
    }
};