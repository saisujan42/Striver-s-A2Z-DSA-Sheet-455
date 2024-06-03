bool Kth_Bit_Set(int k, uint32_t n)
{
    if(((1 << (k - 1)) & n) != 0)
        return true;
    return false;
}
uint32_t reverseBits(uint32_t n) 
{
    uint32_t Reverse = 0;
    for(int i = 1; i <= 32; i++)
    {
        if(Kth_Bit_Set(i, n))
            Reverse = 1 << (32 - i) | Reverse;
    }    
    return Reverse;
}
