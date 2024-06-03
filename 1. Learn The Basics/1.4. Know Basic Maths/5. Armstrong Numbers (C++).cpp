// Approach 1 : Using Iteration

bool checkArmstrong(int n)
{
	if(n == 1)
		return true;
	int Digits = 0, x = n, Armstrong = 0;
	while(x)
	{
		Digits++;
		x /= 10;
	}
	x = n;
	while(x)	
	{
		Armstrong += pow(x % 10, Digits);
		x /= 10;
	}
	if(Armstrong == n)
		return true;
	return false;
}


// Approach 2 : Converting To String

bool checkArmstrong(int n)
{
	string S = to_string(n);
	int Armstrong = 0;
	int Size = S.size();
	for(int i = 0; i < Size; i++)
		Armstrong += pow(S[i] - '0', Size);
	if(Armstrong == n)
		return true;
	return false;
}
