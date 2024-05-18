class Solution 
{
    public:
    long long int reverse(long long int x) 
    {
        long long int ans = 0;
        while(x!=0)
        {
            int k = x % 10;
            ans = (ans * 10) + k;
            if(ans<pow(-2,31) || ans>(pow(2,31)-1))
            return 0;
            x = x/10;
        }
        return ans;
    }
};