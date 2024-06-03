int linearSearch(int n, int key, vector<int> &arr)
{
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            return i;
    return -1;
}
