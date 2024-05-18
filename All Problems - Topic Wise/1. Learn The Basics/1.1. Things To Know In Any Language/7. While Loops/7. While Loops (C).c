#include <stdio.h>

int main() 
{
	int n;
	scanf("%d", &n);
	int Even = 0, Odd = 0;
	while(n)
	{
		int k = n % 10;
		if(k % 2 == 0)
			Even += k;
		else
			Odd += k;
		n /= 10;
	}
	printf("%d %d \n", Even, Odd);
	return 0;
}