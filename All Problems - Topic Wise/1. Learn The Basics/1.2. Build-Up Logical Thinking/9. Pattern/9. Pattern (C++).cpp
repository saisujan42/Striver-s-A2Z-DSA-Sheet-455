void nStarDiamond(int n) 
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
            cout << " ";
        for(int j = 0; j < (2 * i + 1); j++)
            cout << "*";
        cout << "\n";
    }
    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = 0; j < n - i - 1; j++)
            cout << " ";
        for(int j = 0; j < (2 * i + 1); j++)
            cout << "*";
        cout << "\n";
    }
}