int is_sorted(int *a, int n)
{
    while (--n >= 1)
    {
        if (a[n] < a[n - 1])
        {
            return 0;
        }
    }
    return 1;
}
void shuffle(int *a, int n)
{
    int i, t, temp;
    for (i = 0;i < n;i++)
    {
        t = a[i];
        temp = rand() % n;
        a[i] = a[temp];
        a[temp] = t;
    }
}
int* bogoSort(int *a, int n)
{
    while (!is_sorted(a, n))
    {
        shuffle(a, n);
    }
    return a;
}
