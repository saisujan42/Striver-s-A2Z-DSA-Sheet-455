void nBinaryTriangle(int n) 
{
    for(int i = 1, k = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            k = 0;
        else
            k = 1; 
        for(int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k = (k == 1) ? 0 : 1;
        }
        cout << "\n";
    }
}