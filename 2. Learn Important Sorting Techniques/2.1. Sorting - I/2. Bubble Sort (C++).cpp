void Swap(int i, int j, vector<int> &arr)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void bubbleSort(vector<int>& arr, int n) 
{
    for(int i = 0; i < n- 1; i++)
    {
        for(int j = 0; j < n - i - 1; j ++)
            if(arr[j] > arr[j + 1])
                Swap(j, j + 1, arr);
    }
}