void numberCrown(int n) 
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
            cout << j << " ";
        for(int j = 1; j <= 2* (n - i); j++)
            cout << "  ";
        for(int j = i; j >= 1; j--)
            cout << j << " ";
        cout << "\n";
    }
}