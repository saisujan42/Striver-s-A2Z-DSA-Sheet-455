int calcGCD(int a, int b)
{
    return b == 0 ? a : calcGCD(b, a % b);
}