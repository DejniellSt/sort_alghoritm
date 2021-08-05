int* insertSort(int array[],int n)
{
    int t,c,d;
    for (c = 1 ; c <= n - 1; c++)
    {
        d = c;

        while ( d > 0 && array[d-1] > array[d])
        {
            t          = array[d];
            array[d]   = array[d-1];
            array[d-1] = t;
            d--;
        }
    }
    return array;
}
