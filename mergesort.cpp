{
    int temp[100];
    int i = low;
    int j = mid + 1;
pointer
    int k =0;
    while (i<=mid && j<= high)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else 
        {
            temp[k] = arr[j];
            j++;
        }
    k++
    }
}