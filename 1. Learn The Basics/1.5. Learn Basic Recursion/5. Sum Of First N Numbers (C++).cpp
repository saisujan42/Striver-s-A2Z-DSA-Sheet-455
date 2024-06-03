// Aprroach 1 : Recursive Code
// This gives TLE for n <= 10^9

long long sumFirstN(long long n) 
{
    if(n == 0)
        return 0;
    return n + sumFirstN(n - 1);
}


// Approach 2 : Formula


long long sumFirstN(long long n) 
{
    return (n * (n + 1) / 2);
}