bool palindrome(int n)
{
    long long Reverse = 0, x = n;
    while(x)
    {
        int k = x % 10;
        Reverse = (Reverse * 10) + k;
        x /= 10;
    }
    if(Reverse == n)
        return true;
    return false;
}