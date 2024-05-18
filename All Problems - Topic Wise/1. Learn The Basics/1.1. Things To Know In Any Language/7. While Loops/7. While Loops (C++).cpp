#include<iostream>
using namespace std;

int main() 
{
	int n;
	cin >> n;
	int Odd = 0, Even = 0;
	while(n)
	{
		int k = n % 10;
		if(k % 2 == 0)
			Even += k;
		else
			Odd += k;
		n /= 10;
	}
	cout << Even << " " << Odd << "\n";
	return 0;
}