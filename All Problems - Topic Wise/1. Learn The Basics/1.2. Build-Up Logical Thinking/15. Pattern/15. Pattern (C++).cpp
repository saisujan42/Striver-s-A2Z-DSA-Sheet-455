void nLetterTriangle(int n) 
{
    for(int i = n; i >= 1; i--)
    {
        for(char ch = 'A'; ch < 'A' + i; ch++)
            cout << ch << " ";
        cout << "\n";
    }
}