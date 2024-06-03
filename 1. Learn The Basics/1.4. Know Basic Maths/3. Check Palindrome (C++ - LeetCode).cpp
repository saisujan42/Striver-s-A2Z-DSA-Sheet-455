class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0)
            return false;
        long long Reverse = 0, n = x;
        while(n)
        {
            int k = n % 10;
            Reverse = (Reverse * 10) + k;
            n /= 10;
        }    
        if(Reverse == x)
            return true;
        return false;
    }
};