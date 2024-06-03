// Approach 1 : Brute Force TC : O(N^2) SC : O(N^2)

#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat)
{
	int n = mat.size();
	vector<vector<int>> Answer(n, vector<int>(n));
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			Answer[j][n - 1 - i] = mat[i][j];
	mat = Answer;
}


// Approach 2 : Optimal Approach - Transpose Matrix & Reverse Every Row TC : O(N^2) SC : O(1) 

#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat)
{
	int n = mat.size();
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			swap(mat[i][j], mat[j][i]);
	for(int i = 0; i < n; i++)
		reverse(mat[i].begin(), mat[i].end());
}