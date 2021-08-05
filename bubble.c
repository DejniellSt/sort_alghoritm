int* bubbleSort(int array[],int n)
{
    int c,d,swap;
    for (c = 0 ; c < ( n ); c++)
    {
        for (d = 0 ; d < n - c ; d++)
        {
            if (array[d] > array[d+1]) /* For decreasing order use < */
            {
                swap       = array[d];
                array[d]   = array[d+1];
                array[d+1] = swap;
            }
        }
    }
    return array;
}
