void alphaRamp(int n) 
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
            cout << (char)('A' + i - 1) << " ";
        cout << "\n";
    }
}