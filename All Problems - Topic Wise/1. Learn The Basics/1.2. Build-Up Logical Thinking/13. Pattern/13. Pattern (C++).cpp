void nNumberTriangle(int n) 
{
    for(int i = 1, k = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++, k++)
            cout << k << " ";
        cout << "\n";
    }
}