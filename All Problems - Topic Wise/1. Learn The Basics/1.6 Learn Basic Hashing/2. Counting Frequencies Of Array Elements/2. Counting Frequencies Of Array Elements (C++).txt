#include<bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    vector<int> Frequency(n);
    map<int, int> Map;
    for(auto ch : nums)
        Map[ch]++;
    for(int i = 0; i < n; i++)
        Frequency[i] = Map[i + 1];
    return Frequency;
}