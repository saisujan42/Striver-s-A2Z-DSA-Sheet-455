// Approach 1 : Using Xor

#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr)
{
	int Xor = 0;
	for(auto Val : arr)
		Xor ^= Val;
	return Xor;
}

// Approach 2 : Using Map

#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr)
{
	map<int, int> Map;
	for(auto ch : arr)
		Map[ch]++;
	for(auto ch : Map)
		if(ch.second == 1)
			return ch.first;
	return -1;
}


// Approach 3 : Iteration (Already Array is Sorted)

#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr)
{
	int n = arr.size();
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == arr[i + 1])
			i++;
		else
			return arr[i];
	}
	return -1;
}