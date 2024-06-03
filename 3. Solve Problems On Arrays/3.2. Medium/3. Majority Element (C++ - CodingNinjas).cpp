// Approach 1 : Brute Force O(N^2) - Partially Accepted

int majorityElement(vector<int> v) 
{
	int n = v.size();
	for(int i = 0; i < n; i++)
	{
		int Count = 0;
		for(int j = 0; j < n; j++)
			if(v[i] == v[j])
				Count++;
		if(Count > n / 2)
			return v[i];
	}
	return -1;
}


// Approach 2 : Using Map TC: O(N) SC : O(N)

int majorityElement(vector<int> v) 
{
	int n = v.size();
	unordered_map<int, int> Map;
	for(int i = 0; i < n; i++)
		Map[v[i]]++;
	for(auto ch : Map)
		if(ch.second > n / 2)
			return ch.first;
	return -1;
}


// Approach 3 : Moore's Voting Algorithm TC : O(N) SC : O(1)

int majorityElement(vector<int> v) 
{
	int n = v.size();
	int Value, Count = 0;
	for(int i = 0; i < n; i++)
	{
		if(Count == 0)
			Value = v[i], Count++;
		else if(v[i] == Value)
			Count++;
		else
			Count--;
	}
	return Value;
}