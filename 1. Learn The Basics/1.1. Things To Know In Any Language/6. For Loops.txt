#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 1 || n == 2)
        cout << "1\n";
    else
    {
        int a = 1, b = 1, c;
        for(int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << "\n";
    }
    return 0;
}