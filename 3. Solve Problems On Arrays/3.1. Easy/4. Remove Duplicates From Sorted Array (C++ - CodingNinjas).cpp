int removeDuplicates(vector<int> &arr, int n) 
{
	int Count = 0;
	for(int i = 0; i < n - 1; i++)
		if(arr[i] == arr[i + 1])
			Count++;
	return n - Count;
}