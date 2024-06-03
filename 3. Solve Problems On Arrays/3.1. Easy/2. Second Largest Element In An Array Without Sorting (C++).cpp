vector<int> getSecondOrderElements(int n, vector<int> a) 
{
    int MaxValue = max(a[0], a[1]), SecondMax = min(a[0], a[1]);
    int MinValue = min(a[0], a[1]), SecondMin = max(a[0], a[1]);
    for(int i = 1; i < n; i++)
    {
        if(a[i] > MaxValue)
        {
            SecondMax = MaxValue;
            MaxValue = a[i];
        }
        else if(a[i] < MaxValue && a[i] > SecondMax)
            SecondMax = a[i];
        if(a[i] < MinValue)
        {
            SecondMin = MinValue;
            MinValue = a[i];
        }
        else if(a[i] > MinValue && a[i] < SecondMin)
            SecondMin = a[i];
    }
    return {SecondMax, SecondMin};
}
