// Approach 1 : Brute Force TC : O(N^2) SC : O(N^2)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        vector<vector<int>> Answer(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                Answer[j][n - 1 - i] = matrix[i][j];
        matrix = Answer;
    }
};


// Approach 2 : Optimal Approach - Transpose Matrix & Reverse Every Row TC : O(N^2) SC : O(1) 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++)
                swap(matrix[i][j], matrix[j][i]);
        for(int i = 0; i < n; i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};