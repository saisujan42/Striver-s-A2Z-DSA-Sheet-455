void Swap(int i, int j, vector<int> &arr)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void selectionSort(vector<int>&arr) 
{
    int n = arr.size();
    for(int i = 0; i < n - 1; i++)
    {
        int Index = i;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < arr[Index])
                Index = j;
        }
        Swap(i, Index, arr);
    }
}