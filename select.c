int* selectSort(int array[],int n)
{
    int swap,d,c,position;
    for ( c = 0 ; c < ( n - 1 ) ; c++ )
    {
      position = c;

      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c )
      {
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
    }
    return array;
}
