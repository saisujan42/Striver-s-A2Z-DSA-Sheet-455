int traffic(int n, int m, vector<int> nums) 
{
	int Start = 0, End = 0;
	while(End < n)
	{
		if(nums[End] == 0)
			m--;
		if(m < 0)
		{
			if(nums[Start] == 0)
				m++;
			Start++;
		}
		End++;
	}
	return End - Start;
}
