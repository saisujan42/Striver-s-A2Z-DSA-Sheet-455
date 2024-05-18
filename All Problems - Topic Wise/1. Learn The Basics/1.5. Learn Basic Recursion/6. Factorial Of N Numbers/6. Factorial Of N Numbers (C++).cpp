vector<long long> factorialNumbers(long long n) 
{
    vector<long long> Answer;
    long long Factorial = 1;
    for(ll i = 2; Factorial <= n; i++)
    {
        Answer.push_back(Factorial);
        Factorial *= i;
    }
    return Answer;
}