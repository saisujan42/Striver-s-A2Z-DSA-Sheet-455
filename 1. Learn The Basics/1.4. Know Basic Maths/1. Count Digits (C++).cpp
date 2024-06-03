int countDigits(int n)
{
	int Count = 0, temp = n;
	while(temp)
	{
		int k = temp % 10;
		if(k != 0 && n % k == 0)
			Count++;
		temp /= 10;
	}
	return Count;
}