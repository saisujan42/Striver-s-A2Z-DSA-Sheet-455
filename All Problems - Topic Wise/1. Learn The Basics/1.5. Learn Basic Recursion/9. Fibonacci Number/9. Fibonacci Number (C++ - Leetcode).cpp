// Approach 1 : Iterative Code

class Solution {
public:
    int fib(int n) 
    {
        if(n == 0 || n == 1)
            return n;
        int a = 0, b = 1, c;
        for(int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }    
        return c;
    }
};

Approach 2 : Recursive Code

class Solution 
{
    public:
    int fib(int n) 
    {
        if(n == 0 || n == 1)
            return n;
        return fib(n - 1) + fib(n - 2);    
    }
};