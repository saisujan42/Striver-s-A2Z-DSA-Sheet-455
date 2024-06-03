// Approach 1 : Two Pointer Technique

void Swap(int &Start, int &End, vector<int> &a)
{
    a[Start] = a[End];
    a[End] = 0;
    Start++, End++;
}
vector<int> moveZeros(int n, vector<int> a) 
{
    int Start = 0, End = 0;
    for(int i = 0; i < n && a[i] != 0; i++)
        Start++;
    End = Start + 1;

    while(Start < n && End < n)
    {
        if(a[End] != 0)
            Swap(Start, End, a);
        else 
            End++;
    }
    return a;
}


// Approach 2 : Copying Non-Zero Elements To New Array

vector<int> moveZeros(int n, vector<int> a) 
{
    vector<int> Temp;
    for(int i = 0; i < n; i++)
        if(a[i] != 0)
            Temp.push_back(a[i]);
    
    for(int i = Temp.size(); i < n; i++)
        Temp.push_back(0);
    return Temp;
}
