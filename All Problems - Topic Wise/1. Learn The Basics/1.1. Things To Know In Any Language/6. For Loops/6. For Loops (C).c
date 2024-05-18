#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n == 1 || n == 2)
        printf("1\n");
    else
    {
        int a = 1, b = 1, c;
        for(int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d\n", c);
    }
    return 0;
}

