void alphaTriangle(int n) 
{
    for(int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - 1;
        for(int j = 1; j <= i; ch--, j++)
            cout << ch << " ";
        cout << "\n";
    }
}