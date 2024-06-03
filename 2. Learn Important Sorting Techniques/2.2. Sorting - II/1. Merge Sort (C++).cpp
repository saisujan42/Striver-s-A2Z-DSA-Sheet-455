#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr, int Low, int Mid, int High)
{
    vector<int> Temp;
    int Left = Low, Right = Mid + 1;
    while(Left <= Mid && Right <= High)
    {
        if(arr[Left] < arr[Right])
        {
            Temp.push_back(arr[Left]);
            Left++;
        }
        else
        {
            Temp.push_back(arr[Right]);
            Right++;
        }
    }
    while(Left <= Mid)
    {
        Temp.push_back(arr[Left]);
        Left++;
    }
    while(Right <= High)
    {
        Temp.push_back(arr[Right]);
        Right++;
    }
    for(int i = Low; i <= High; i++)
        arr[i] = Temp[i - Low];
}
void mergeSort(vector<int> &arr, int Low, int High) 
{
    if(Low >= High)
        return;
    int Mid = (Low + High) / 2;
    mergeSort(arr, Low, Mid);
    mergeSort(arr, Mid + 1, High);
    Merge(arr, Low, Mid, High);
}
