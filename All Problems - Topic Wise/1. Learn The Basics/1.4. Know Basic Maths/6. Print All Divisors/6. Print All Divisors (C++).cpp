int sumOfAllDivisors(int n)
{
	int Sum = 0;
	for(int i = 1; i <= n; i++)
		Sum += (n / i) * i;
	return Sum;
}
