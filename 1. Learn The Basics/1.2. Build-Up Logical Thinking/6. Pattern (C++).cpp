void nNumberTriangle(int n) 
{
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
            cout << j << " ";
        cout << "\n";
    }
}