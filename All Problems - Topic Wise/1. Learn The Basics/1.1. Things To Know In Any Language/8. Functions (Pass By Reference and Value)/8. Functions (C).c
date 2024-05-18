#include <stdio.h>

int Maximum(int x, int y)
{
    return (x > y) ? x : y;
}

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int test, a, b, r;
    scanf("%d", &test);
    scanf("%d %d", &a, &b);
    switch (test)
    {
        case 1:
            r = Maximum(a, b);
            printf("%d", r);
            break;
        case 2:
            Swap(&a, &b);
            printf("%d %d", a, b);
            break;
        default:
            printf("Invalid test option");
    }
    return 0;
}

