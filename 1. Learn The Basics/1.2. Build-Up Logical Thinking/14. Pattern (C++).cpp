void nLetterTriangle(int n) 
{
    for(int i = 1; i <= n; i++)
    {
        for(char ch = 'A'; ch < 'A' + i; ch++)
            cout << ch << " ";
        cout << "\n";
    }
}