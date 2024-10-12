void getNumberPattern(int n) 
{
    for(int i = 0; i < 2 * n - 1; i++)
    {
        for(int j = 0; j < 2 * n - 1; j++)
        {
            int k = min(i, j);
            int m = min(2 * n - 2 - i, 2 * n - 2 - j);
            cout << n - min(k, m);
        }
        cout << "\n";
    }
}