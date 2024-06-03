void Swap(int i, int j, int arr[])
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j])
        {
            Swap(j, j - 1, arr);
            j--;
        }
    }
}