// Approach 1 : In-Built Functions

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) 
{
    int FirstValue = arr[0];
    arr.erase(arr.begin());
    arr.push_back(FirstValue);
    return arr;
}


// Approach 2 : Copying Elements To New Array

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) 
{
    vector<int> Answer;
    for(int i = 1; i < n; i++)
        Answer.push_back(arr[i]);
    Answer.push_back(arr[0]);
    return Answer;
}
